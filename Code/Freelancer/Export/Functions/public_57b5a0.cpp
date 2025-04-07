#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_579e90);
CLANG_FORWARD_PROC_SYMBOL(public_57b5a0);
CLANG_FORWARD_PROC_SYMBOL(public_57b700);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_57b649 _public_57b649
#define public_57b6a1 _public_57b6a1
#define public_57b6b0 _public_57b6b0
#define public_57b6e6 _public_57b6e6

PROC_DECLARE(0x57b5a0, internal_57b5a0, public_57b5a0);
extern "C" NAKED register_t __cdecl internal_57b5a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        push edi
        push eax
        mov esi, ecx
        call public_4b5060
        mov dword ptr ds : [esi+0x344], edi
        mov dword ptr ds : [esi+0x340], edi
        mov dword ptr ds : [esi+0x33C], edi
        mov dword ptr ds : [esi+0x338], edi
        mov dword ptr ds : [esi+0x35C], edi
        mov dword ptr ds : [esi+0x358], edi
        mov dword ptr ds : [esi+0x354], edi
        mov dword ptr ds : [esi+0x34C], edi
        mov dword ptr ds : [esi+0x350], edi
        mov dword ptr ds : [esi+0x348], edi
        mov dword ptr ds : [esi+0x484], edi
        mov dword ptr ds : [esi+0x480], edi
        mov dword ptr ds : [esi+0x47C], edi
        mov byte ptr ss : [esp+0x14], al
        mov al, 1
        mov ecx, esi
        mov byte ptr ds : [esi+0x400], al
        mov byte ptr ds : [esi+0x401], al
        mov dword ptr ds : [esi+0x330], 0x3ECCCCCD
        mov dword ptr ds : [esi+0x334], 0x3E99999A
        call public_579e90
        mov ebp, dword ptr ds : [esi+0x32C]
        cmp ebp, edi
        je public_57b6a1
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, edi
        je public_57b649
        push eax
        call dword ptr ds : [public_5c72dc]
        mov dword ptr ss : [ebp+8], edi
        public_57b649 : nop
        call public_57b700
        test al, al
        je public_57b6a1
        mov ecx, dword ptr ds : [public_67eca4]
        mov edx, dword ptr ds : [public_67eca0]
        mov eax, dword ptr ds : [public_61516c]
        push ebp
        push ecx
        push edi
        push edx
        push 0x120
        push 0x100
        push 0x64
        push 0x64
        push 0xCF0000
/*FIXUP push offset public_5e4718 @0x57b67a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4718
        push eax
        push edi
        call dword ptr ds : [public_5c72a4]
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, edi
        je public_57b6a1
        push 5
        push eax
        call dword ptr ds : [public_5c7290]
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [public_5c7264]
        public_57b6a1 : nop
        mov ebx, dword ptr ds : [esi+0x48C]
        mov ebp, dword ptr ds : [ebx]
        cmp ebp, ebx
        je public_57b6e6
        lea ecx, ds:[ecx]
        public_57b6b0 : nop
        mov edi, ebp
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov ebp, dword ptr ss : [ebp]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], edx
        lea ecx, ds:[edi+8]
        call public_45eeb0
        push edi
        call public_5b7e1d
        mov ecx, dword ptr ds : [esi+0x490]
        add esp, 4
        dec ecx
        cmp ebp, ebx
        mov dword ptr ds : [esi+0x490], ecx
        jne public_57b6b0
        public_57b6e6 : nop
        mov al, byte ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x57b5a0)
    }
}

#undef public_57b649
#undef public_57b6a1
#undef public_57b6b0
#undef public_57b6e6
