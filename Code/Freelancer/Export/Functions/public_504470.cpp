#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_4ff360);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);
CLANG_FORWARD_PROC_SYMBOL(public_504470);
CLANG_FORWARD_PROC_SYMBOL(public_5377c0);

#define public_504486 _public_504486
#define public_5045c0 _public_5045c0
#define public_5045d5 _public_5045d5
#define public_5045f7 _public_5045f7
#define public_504623 _public_504623

PROC_DECLARE(0x504470, internal_504470, public_504470);
extern "C" NAKED register_t __cdecl internal_504470()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        push edi
        je public_504486
        push 3
        call public_4ff360
        public_504486 : nop
        mov ecx, dword ptr ds : [esi+0x68]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x3C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x40], edx
        mov eax, dword ptr ds : [eax+8]
        add edi, 8
        mov ecx, edi
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_5045f7
        lea ebx, ds:[esi+0x48]
        push ebx
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push edi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674fcc
        call public_503f40
        test al, al
        je public_5045f7
        mov ecx, dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        mov edi, eax
        je public_5045c0
        mov eax, dword ptr ds : [esi+0x68]
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        push eax
        call public_4f7d20
        public_5045c0 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_5045d5
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x18]
        push eax
        push edi
        call dword ptr ds : [edx+0x94]
        public_5045d5 : nop
        mov ebx, dword ptr ds : [ebx+0xC]
        test ebx, ebx
        je public_504623
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        mov ecx, ebx
        call public_5377c0
        pop edi
        mov byte ptr ds : [esi+0xD8], 1
        pop esi
        pop ebx
        add esp, 0x3C
        ret 
        public_5045f7 : nop
        mov ecx, dword ptr ds : [esi]
        add ecx, 8
        mov edi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x277
/*FIXUP push offset public_5da80c @0x504613*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
/*FIXUP push offset public_5dabe0 @0x504618*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dabe0
        push edi
        call dword ptr ds : [edx]
        add esp, 0x14
        public_504623 : nop
        pop edi
        mov byte ptr ds : [esi+0xD8], 1
        pop esi
        pop ebx
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x504470)
    }
}

#undef public_504486
#undef public_5045c0
#undef public_5045d5
#undef public_5045f7
#undef public_504623
