#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fb3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6700690);
CLANG_FORWARD_PROC_SYMBOL(public_67006b0);

#define public_66fb3fb _public_66fb3fb
#define public_66fb3fd _public_66fb3fd
#define public_66fb45f _public_66fb45f
#define public_66fb46f _public_66fb46f
#define public_66fb481 _public_66fb481
#define public_66fb486 _public_66fb486

PROC_DECLARE(0x66fb3e0, internal_66fb3e0, public_66fb3e0);
extern "C" NAKED register_t __cdecl internal_66fb3e0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x2C]
        fcomp dword ptr ds : [public_6701394]
        fnstsw ax
        test ah, 5
        jp public_66fb3fb
        mov eax, 1
        jmp public_66fb3fd
        public_66fb3fb : nop
        xor eax, eax
        public_66fb3fd : nop
        test al, al
        mov byte ptr ds : [esi+0x64], al
        mov byte ptr ds : [esi+0x65], 0
        jne public_66fb486
        push 0
        call public_6700690
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        test ecx, ecx
        je public_66fb486
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push edi
        lea edi, ss:[esp+8]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0xC8]
        test eax, eax
        pop edi
        jl public_66fb486
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_67006b0
        mov edx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ss : [esp+8]
        add esp, 4
        cmp edx, 1
        sete cl
        cmp eax, 0xA
        mov byte ptr ds : [esi+0x65], cl
        jl public_66fb45f
        cmp eax, 0xE
        jle public_66fb46f
        public_66fb45f : nop
        push eax
        call public_67006b0
        mov cl, byte ptr ds : [eax+0x48]
        add esp, 4
        test cl, cl
        je public_66fb481
        public_66fb46f : nop
        mov al, byte ptr ds : [esi+0x65]
        test al, al
        jne public_66fb481
        mov eax, 1
        mov byte ptr ds : [esi+0x64], al
        pop esi
        pop ecx
        ret 
        public_66fb481 : nop
        xor eax, eax
        mov byte ptr ds : [esi+0x64], al
        public_66fb486 : nop
        mov al, byte ptr ds : [esi+0x64]
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x66fb3e0)
    }
}

#undef public_66fb3fb
#undef public_66fb3fd
#undef public_66fb45f
#undef public_66fb46f
#undef public_66fb481
#undef public_66fb486
