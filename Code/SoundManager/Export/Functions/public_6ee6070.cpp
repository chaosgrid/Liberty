#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee16c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee6070);

#define public_6ee608d _public_6ee608d
#define public_6ee60cd _public_6ee60cd

PROC_DECLARE(0x6ee6070, internal_6ee6070, public_6ee6070);
extern "C" NAKED register_t __cdecl internal_6ee6070()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        mov ebp, ecx
        mov bl, 1
        call dword ptr ds : [eax+0x1C]
        test al, al
        je public_6ee608d
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6ee608d : nop
        mov edx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        push eax
        mov ecx, ebp
        call public_6ee31d0
        test al, al
        je public_6ee60cd
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push esi
        push edi
        call public_6ee16c0
        add esp, 8
        mov ebx, eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [ebp+0x4C]
        add ebx, eax
        cmp ecx, ebx
        mov ecx, dword ptr ds : [edi]
        push edi
        seta bl
        call dword ptr ds : [ecx+8]
        pop edi
        public_6ee60cd : nop
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ee6070)
    }
}

#undef public_6ee608d
#undef public_6ee60cd
