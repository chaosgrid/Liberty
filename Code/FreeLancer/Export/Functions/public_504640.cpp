#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4ff360);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_504640);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_504657 _public_504657
#define public_50473d _public_50473d
#define public_504771 _public_504771
#define public_50483b _public_50483b
#define public_504867 _public_504867

PROC_DECLARE(0x504640, internal_504640, public_504640);
extern "C" NAKED register_t __cdecl internal_504640()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        push edi
        je public_504657
        push 0
        call public_4ff360
        public_504657 : nop
        call public_54baf0
        mov ecx, dword ptr ds : [esi+0x68]
        mov ebp, dword ptr ds : [public_5c6040]
        cmp ecx, eax
        mov ecx, dword ptr ds : [esi]
        je public_504771
        add ecx, 0x10
        call ebp
        test al, al
        jne public_504867
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x4C], edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x68]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], ecx
        add edi, 0x10
        mov ecx, edi
        mov ebx, eax
        call ebp
        test al, al
        jne public_50473d
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+0x58]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        push ebx
        push ecx
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        test al, al
        jne public_504867
        public_50473d : nop
        mov ecx, dword ptr ds : [esi]
        add ecx, 0x10
        mov edi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x28B
/*FIXUP push offset public_5da80c @0x504759*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
/*FIXUP push offset public_5dac68 @0x50475e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dac68
        push edi
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 
        public_504771 : nop
        add ecx, 0xC
        call ebp
        test al, al
        jne public_504867
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x40], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x4C], edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [esi+0x68]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], ecx
        add edi, 0xC
        mov ecx, edi
        mov ebx, eax
        call ebp
        test al, al
        jne public_50483b
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[esi+0x58]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        push ebx
        push ecx
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        test al, al
        jne public_504867
        public_50483b : nop
        mov ecx, dword ptr ds : [esi]
        add ecx, 0xC
        mov edi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x293
/*FIXUP push offset public_5da80c @0x504857*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
/*FIXUP push offset public_5dac20 @0x50485c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dac20
        push edi
        call dword ptr ds : [edx]
        add esp, 0x14
        public_504867 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x504640)
    }
}

#undef public_504657
#undef public_50473d
#undef public_504771
#undef public_50483b
#undef public_504867
