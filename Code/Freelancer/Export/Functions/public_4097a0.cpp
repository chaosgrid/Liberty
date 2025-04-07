#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4024d0);
CLANG_FORWARD_PROC_SYMBOL(public_407000);
CLANG_FORWARD_PROC_SYMBOL(public_4097a0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8579);

#define public_4097e0 _public_4097e0
#define public_409818 _public_409818
#define public_409850 _public_409850
#define public_40985e _public_40985e

PROC_DECLARE(0x4097a0, internal_4097a0, public_4097a0);
extern "C" NAKED register_t __cdecl internal_4097a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8579 @0x4097a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8579
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], edi
        mov eax, dword ptr ds : [edi+0x68]
        mov ebx, dword ptr ds : [edi+0x64]
        xor ebp, ebp
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_409818
        lea esi, ds:[ebx+0x18]
        lea esp, ss:[esp]
        public_4097e0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        lea ecx, ds:[esi-4]
        call public_53aaa0
        mov eax, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ds:[esi-0x14]
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        call public_4de730
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 0x24
        add esi, 0x24
        cmp ebx, eax
        jne public_4097e0
        public_409818 : nop
        mov eax, dword ptr ds : [edi+0x64]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+0x64], ebp
        mov dword ptr ds : [edi+0x68], ebp
        mov dword ptr ds : [edi+0x6C], ebp
        mov dword ptr ds : [edi], offset public_5c7734
        lea edx, ds:[edi+4]
        push edx
        mov dword ptr ss : [esp+0x28], 3
        call public_4024d0
        mov ebx, dword ptr ds : [edi+0x48]
        mov esi, dword ptr ds : [edi+0x44]
        add esp, 8
        cmp esi, ebx
        je public_40985e
        mov edi, edi
        public_409850 : nop
        mov ecx, esi
        call public_407000
        add esi, 0x24
        cmp esi, ebx
        jne public_409850
        public_40985e : nop
        mov eax, dword ptr ds : [edi+0x44]
        push eax
        call public_5b7e1d
        mov dword ptr ds : [edi+0x44], ebp
        mov dword ptr ds : [edi+0x48], ebp
        mov dword ptr ds : [edi+0x4C], ebp
        mov ecx, dword ptr ds : [edi+0x34]
        push ecx
        call public_5b7e1d
        mov dword ptr ds : [edi+0x34], ebp
        mov dword ptr ds : [edi+0x38], ebp
        mov dword ptr ds : [edi+0x3C], ebp
        mov edx, dword ptr ds : [edi+0x24]
        push edx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        mov dword ptr ds : [edi+0x24], ebp
        mov dword ptr ds : [edi+0x28], ebp
        mov dword ptr ds : [edi+0x2C], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4097a0)
    }
}

#undef public_4097e0
#undef public_409818
#undef public_409850
#undef public_40985e
