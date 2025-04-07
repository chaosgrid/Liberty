#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805b10);
CLANG_FORWARD_PROC_SYMBOL(public_6805b90);

#define public_6805b2b _public_6805b2b
#define public_6805b3f _public_6805b3f
#define public_6805b56 _public_6805b56
#define public_6805b68 _public_6805b68
#define public_6805b6f _public_6805b6f

PROC_DECLARE(0x6805b10, internal_6805b10, public_6805b10);
extern "C" NAKED register_t __cdecl internal_6805b10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        push ebx
        push ebp
        push esi
        push edi
        add eax, 0x58
        push eax
        xor ebp, ebp
        xor edi, edi
        call public_6805b90
        add esp, 4
        xor ebx, ebx
        public_6805b2b : nop
        mov ecx, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [ecx+0x60]
        mov eax, dword ptr ds : [ecx+ebx]
        add ecx, ebx
        xor edx, edx
        cmp eax, ebp
        jle public_6805b6f
        public_6805b3f : nop
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+edx*4]
        cmp eax, ebp
        je public_6805b68
        mov esi, dword ptr ds : [eax+4]
        cmp esi, 1
        jne public_6805b56
        mov dword ptr ds : [eax+4], ebp
        jmp public_6805b68
        public_6805b56 : nop
        cmp esi, ebp
        jne public_6805b68
        mov dword ptr ds : [eax], edi
        mov edi, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+edx*4], offset public_680d810
        public_6805b68 : nop
        mov eax, dword ptr ds : [ecx]
        inc edx
        cmp edx, eax
        jl public_6805b3f
        public_6805b6f : nop
        add ebx, 0xC
        cmp ebx, 0x2E8
        jl public_6805b2b
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6805b10)
    }
}

#undef public_6805b2b
#undef public_6805b3f
#undef public_6805b56
#undef public_6805b68
#undef public_6805b6f
