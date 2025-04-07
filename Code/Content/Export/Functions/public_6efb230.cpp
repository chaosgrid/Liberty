#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac788);

#define public_6efb262 _public_6efb262
#define public_6efb26a _public_6efb26a
#define public_6efb270 _public_6efb270
#define public_6efb290 _public_6efb290
#define public_6efb298 _public_6efb298
#define public_6efb2a2 _public_6efb2a2
#define public_6efb2df _public_6efb2df
#define public_6efb2e7 _public_6efb2e7
#define public_6efb2ed _public_6efb2ed
#define public_6efb310 _public_6efb310
#define public_6efb318 _public_6efb318
#define public_6efb322 _public_6efb322

PROC_DECLARE(0x6efb230, internal_6efb230, public_6efb230);
extern "C" NAKED register_t __cdecl internal_6efb230()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac788 @0x6efb232*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac788
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0xC], edi
        jne public_6efb262
        xor eax, eax
        jmp public_6efb26a
        public_6efb262 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6efb26a : nop
        test eax, eax
        jge public_6efb270
        xor eax, eax
        public_6efb270 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ecx, edx
        je public_6efb2a2
        lea ecx, ds:[ecx]
        public_6efb290 : nop
        test eax, eax
        je public_6efb298
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        public_6efb298 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6efb290
        public_6efb2a2 : nop
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], eax
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [edi+0x20], eax
        mov cl, byte ptr ds : [esi+0x24]
        mov byte ptr ds : [edi+0x24], cl
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        mov dword ptr ss : [esp+0x18], 0
        jne public_6efb2df
        xor eax, eax
        jmp public_6efb2e7
        public_6efb2df : nop
        mov eax, dword ptr ds : [esi+0x2C]
        sub eax, ecx
        sar eax, 2
        public_6efb2e7 : nop
        test eax, eax
        jge public_6efb2ed
        xor eax, eax
        public_6efb2ed : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+0x28], eax
        mov edx, dword ptr ds : [esi+0x2C]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x28]
        add esp, 4
        cmp eax, edx
        je public_6efb322
        lea esp, ss:[esp]
        public_6efb310 : nop
        test ecx, ecx
        je public_6efb318
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6efb318 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6efb310
        public_6efb322 : nop
        mov dword ptr ds : [edi+0x2C], ecx
        mov dword ptr ds : [edi+0x30], ecx
        mov eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi+0x34], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6efb230)
    }
}

#undef public_6efb262
#undef public_6efb26a
#undef public_6efb270
#undef public_6efb290
#undef public_6efb298
#undef public_6efb2a2
#undef public_6efb2df
#undef public_6efb2e7
#undef public_6efb2ed
#undef public_6efb310
#undef public_6efb318
#undef public_6efb322
