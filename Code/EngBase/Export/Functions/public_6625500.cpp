#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625500);

#define public_6625512 _public_6625512
#define public_662552a _public_662552a
#define public_6625537 _public_6625537
#define public_662553f _public_662553f
#define public_6625549 _public_6625549
#define public_662554e _public_662554e
#define public_6625550 _public_6625550
#define public_6625555 _public_6625555

PROC_DECLARE(0x6625500, internal_6625500, public_6625500);
extern "C" NAKED register_t __cdecl internal_6625500()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp eax, esi
        je public_6625555
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        public_6625512 : nop
        mov ecx, dword ptr ds : [edx]
        inc ecx
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6625537
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_662554e
        public_662552a : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_662552a
        jmp public_662554e
        public_6625537 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6625549
        public_662553f : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_662553f
        public_6625549 : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6625550
        public_662554e : nop
        mov eax, ecx
        public_6625550 : nop
        cmp eax, esi
        jne public_6625512
        pop ebx
        public_6625555 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6625500)
    }
}

#undef public_6625512
#undef public_662552a
#undef public_6625537
#undef public_662553f
#undef public_6625549
#undef public_662554e
#undef public_6625550
#undef public_6625555
