#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262d50);
CLANG_FORWARD_PROC_SYMBOL(public_6284e10);
CLANG_FORWARD_PROC_SYMBOL(public_628b200);
CLANG_FORWARD_PROC_SYMBOL(public_628b440);
CLANG_FORWARD_PROC_SYMBOL(public_628b560);
CLANG_FORWARD_PROC_SYMBOL(public_6293710);
CLANG_FORWARD_PROC_SYMBOL(public_629cb70);
CLANG_FORWARD_PROC_SYMBOL(public_629fb90);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_629cb95 _public_629cb95
#define public_629cc33 _public_629cc33
#define public_629ccc7 _public_629ccc7
#define public_629ccf8 _public_629ccf8

PROC_DECLARE(0x629cb70, internal_629cb70, public_629cb70);
extern "C" NAKED register_t __cdecl internal_629cb70()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        je public_629cb95
        push eax
        mov dword ptr ss : [ebp+0xC], 0xFFFFFFFF
        call public_628b440
        add esp, 4
        mov dword ptr ss : [ebp+8], ebx
        public_629cb95 : nop
        mov esi, dword ptr ss : [esp+0x60]
        cmp esi, ebx
        je public_629ccf8
        mov ecx, esi
        call public_6293710
        mov edi, eax
        cmp edi, ebx
        je public_629ccf8
        push edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ss : [esp+0x20], bl
        mov byte ptr ss : [esp+0x21], bl
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x58], 0x3F800000
        mov dword ptr ss : [esp+0x48], 0x3F800000
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov byte ptr ss : [esp+0x22], bl
        call public_6284e10
        add esp, 4
        lea edx, ss:[esp+0x1E]
        public_629cc33 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        cmp cl, bl
        jne public_629cc33
        mov eax, dword ptr ds : [edi+0x50]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x48]
        mov edx, dword ptr ds : [public_6399040]
        mov dword ptr ss : [esp+0x58], ebp
        mov byte ptr ss : [esp+0x1D], 1
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [eax]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov ecx, dword ptr ds : [public_6399040]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        push edx
        call dword ptr ds : [ebx+0x68]
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, esi
        call public_629fb90
        mov ecx, eax
        call public_62f0d70
        test eax, eax
        je public_629ccc7
        lea esi, ss:[ebp+8]
        push esi
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        call public_628b200
        mov edx, dword ptr ds : [esi]
        push edx
        push edi
        call public_628b560
        add esp, 0x14
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0xC], 0
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 4
        public_629ccc7 : nop
        mov ecx, edi
        mov esi, 0x100001
        call public_6262d50
        mov ecx, eax
        add ecx, 8
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x1E9
/*FIXUP push offset public_639d634 @0x629cce8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d634
/*FIXUP push offset public_639d6b0 @0x629cced*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d6b0
        push esi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_629ccf8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x4C
        ret 4
        UNREACHABLE_TRAP(0x629cb70)
    }
}

#undef public_629cb95
#undef public_629cc33
#undef public_629ccc7
#undef public_629ccf8
