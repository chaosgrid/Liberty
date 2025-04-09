#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4382b0);

#define public_4382c7 _public_4382c7
#define public_4382d2 _public_4382d2
#define public_4382df _public_4382df
#define public_4382f0 _public_4382f0
#define public_4382fc _public_4382fc
#define public_438305 _public_438305

PROC_DECLARE(0x4382b0, internal_4382b0, public_4382b0);
extern "C" NAKED register_t __cdecl internal_4382b0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x39]
        test al, al
        jne public_4382df
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        jne public_4382d2
        public_4382c7 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        je public_4382c7
        public_4382d2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_4382df : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_4382fc
        lea esp, ss:[esp]
        public_4382f0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_4382f0
        public_4382fc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_438305
        mov dword ptr ds : [ecx], eax
        public_438305 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x4382b0)
    }
}

#undef public_4382c7
#undef public_4382d2
#undef public_4382df
#undef public_4382f0
#undef public_4382fc
#undef public_438305
