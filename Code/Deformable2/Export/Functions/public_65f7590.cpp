#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7590);

#define public_65f75a6 _public_65f75a6
#define public_65f75cd _public_65f75cd
#define public_65f75e7 _public_65f75e7

PROC_DECLARE(0x65f7590, internal_65f7590, public_65f7590);
extern "C" NAKED register_t __cdecl internal_65f7590()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x18]
        push ebp
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+4], ebp
        jle public_65f75e7
        push ebx
        push esi
        push edi
        public_65f75a6 : nop
        mov ebx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [ebx+ebp+8]
        add ebx, ebp
        test ecx, ecx
        je public_65f75cd
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x50]
        mov edi, offset public_6602790
        mov esi, eax
        mov ecx, 0xC
        xor edx, edx
        repe cmpsb
        jne public_65f75cd
        mov dword ptr ds : [ebx+0x20], edx
        public_65f75cd : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0x18]
        inc ecx
        add ebp, 0x24
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        jl public_65f75a6
        pop edi
        pop esi
        pop ebx
        public_65f75e7 : nop
        mov al, 1
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65f7590)
    }
}

#undef public_65f75a6
#undef public_65f75cd
#undef public_65f75e7
