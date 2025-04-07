#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e3d0);

#define public_6f4e3df _public_6f4e3df
#define public_6f4e3ed _public_6f4e3ed
#define public_6f4e40f _public_6f4e40f
#define public_6f4e41c _public_6f4e41c

PROC_DECLARE(0x6f4e3d0, internal_6f4e3d0, public_6f4e3d0);
extern "C" NAKED register_t __cdecl internal_6f4e3d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        xor ebp, ebp
        public_6f4e3df : nop
        mov ecx, dword ptr ds : [eax+0x68]
        xor edi, edi
        test ecx, ecx
        jg public_6f4e40f
        mov esi, ebp
        shl esi, 4
        public_6f4e3ed : nop
        mov eax, dword ptr ds : [eax+0x64]
        add eax, esi
        push eax
        call ebx
        add esp, 4
        test eax, eax
        jne public_6f4e41c
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x68]
        dec edi
        add esi, 0x120
        cmp edi, ecx
        jge public_6f4e3ed
        public_6f4e40f : nop
        inc ebp
        cmp ebp, 0x11
        jle public_6f4e3df
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6f4e41c : nop
        mov eax, dword ptr ds : [ebp*4+public_6f60648]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4e3d0)
    }
}

#undef public_6f4e3df
#undef public_6f4e3ed
#undef public_6f4e40f
#undef public_6f4e41c
