#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405540);

#define public_405557 _public_405557
#define public_405562 _public_405562
#define public_40556f _public_40556f
#define public_405580 _public_405580
#define public_40558c _public_40558c
#define public_405595 _public_405595

PROC_DECLARE(0x405540, internal_405540, public_405540);
extern "C" NAKED register_t __cdecl internal_405540()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x21]
        test al, al
        jne public_40556f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_405562
        public_405557 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_405557
        public_405562 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_40556f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_40558c
        lea esp, ss:[esp]
        public_405580 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_405580
        public_40558c : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_405595
        mov dword ptr ds : [ecx], eax
        public_405595 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x405540)
    }
}

#undef public_405557
#undef public_405562
#undef public_40556f
#undef public_405580
#undef public_40558c
#undef public_405595
