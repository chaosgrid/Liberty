#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b760);
CLANG_FORWARD_PROC_SYMBOL(public_6d22070);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62154);

#define public_6d1b7c4 _public_6d1b7c4
#define public_6d1b818 _public_6d1b818
#define public_6d1b872 _public_6d1b872
#define public_6d1b87e _public_6d1b87e
#define public_6d1b890 _public_6d1b890
#define public_6d1b8a7 _public_6d1b8a7

PROC_DECLARE(0x6d1b760, internal_6d1b760, public_6d1b760);
extern "C" NAKED register_t __cdecl internal_6d1b760()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62154 @0x6d1b762*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62154
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6d68a20
        lea ebx, ds:[esi+0x54]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], 5
        mov byte ptr ds : [ebx], 0
        mov byte ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call public_6d22070
        mov al, byte ptr ss : [esp+0x10]
        test al, al
        je public_6d1b7c4
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        je public_6d1b7c4
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        public_6d1b7c4 : nop
        lea ebp, ds:[esi+4]
        push edi
        mov ecx, ebp
        call public_6d1b6f0
        mov eax, dword ptr ds : [esi+0x60]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x5C]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 4
        call public_6cf7720
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        mov cl, byte ptr ds : [ebx]
        add esp, 4
        test cl, cl
        mov byte ptr ss : [esp+0x24], 3
        je public_6d1b818
        mov ebx, dword ptr ds : [ebx+4]
        cmp ebx, eax
        je public_6d1b818
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx]
        public_6d1b818 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x48]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 2
        call public_6cf7720
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        xor ebx, ebx
        push 1
        lea ecx, ds:[esi+0x38]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x28], 1
        call dword ptr ds : [public_6d64b58]
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, ebx
        pop edi
        je public_6d1b87e
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d1b872
        cmp cl, 0xFF
        je public_6d1b872
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d1b87e
        public_6d1b872 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d1b87e : nop
        mov dword ptr ds : [esi+0x2C], ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        cmp dword ptr ss : [ebp], ebx
        je public_6d1b8a7
        lea esp, ss:[esp]
        public_6d1b890 : nop
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [ecx]
        mov edx, ecx
        push edx
        call public_6d5ffb0
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [ebp], esi
        jne public_6d1b890
        public_6d1b8a7 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6d1b760)
    }
}

#undef public_6d1b7c4
#undef public_6d1b818
#undef public_6d1b872
#undef public_6d1b87e
#undef public_6d1b890
#undef public_6d1b8a7
