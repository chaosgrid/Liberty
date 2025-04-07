#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620bd70);
CLANG_FORWARD_PROC_SYMBOL(public_622ff00);
CLANG_FORWARD_PROC_SYMBOL(public_6230370);
CLANG_FORWARD_PROC_SYMBOL(public_62306e0);
CLANG_FORWARD_PROC_SYMBOL(public_6230790);
CLANG_FORWARD_PROC_SYMBOL(public_62307b0);
CLANG_FORWARD_PROC_SYMBOL(public_62311d0);
CLANG_FORWARD_JUMP_SYMBOL(public_62498f0);

#define public_62303bc _public_62303bc
#define public_62303d4 _public_62303d4
#define public_6230421 _public_6230421
#define public_623046b _public_623046b
#define public_623048f _public_623048f
#define public_6230499 _public_6230499
#define public_62304b7 _public_62304b7
#define public_62304c1 _public_62304c1
#define public_6230502 _public_6230502
#define public_623054a _public_623054a
#define public_6230550 _public_6230550
#define public_6230558 _public_6230558
#define public_623056f _public_623056f
#define public_623057e _public_623057e
#define public_62305a4 _public_62305a4

PROC_DECLARE(0x6230370, internal_6230370, public_6230370);
extern "C" NAKED register_t __cdecl internal_6230370()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62498f0 @0x6230378*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62498f0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        fld dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        push edi
        fadd dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ss : [ebp+0xB0]
        test eax, eax
        fstp dword ptr ss : [ebp+0x84]
        jne public_62303bc
        mov eax, dword ptr ss : [ebp+0xB4]
        test eax, eax
        jne public_62303bc
        mov eax, dword ptr ss : [ebp+4]
        or al, 1
        mov dword ptr ss : [ebp+4], eax
        public_62303bc : nop
        mov eax, dword ptr ss : [ebp+0xA0]
        mov esi, dword ptr ss : [ebp+0x9C]
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_62304c1
        public_62303d4 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        test al, al
        je public_6230421
        mov eax, dword ptr ss : [ebp+0xA0]
        lea edi, ss:[ebp+0x98]
        push esi
        lea edx, ds:[esi+4]
        push eax
        push edx
        call public_62311d0
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        mov ecx, edi
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_620bd70
        mov eax, dword ptr ds : [edi+8]
        add eax, 0xFFFFFFFC
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [ebp+0xA0]
        mov dword ptr ss : [esp+0x14], eax
        jmp public_62304b7
        public_6230421 : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x9C]
        lea edi, ss:[ebp+0xB4]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_62307b0
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ebx
        lea ecx, ss:[esp+0x10]
        xor eax, eax
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x1C], eax
        call public_6230790
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x28], 1
        cmp ecx, ebx
        je public_6230499
        public_623046b : nop
        fld dword ptr ds : [ecx+0x24]
        fcomp dword ptr ds : [ecx+0x28]
        lea edx, ds:[ecx+0x24]
        fnstsw ax
        test ah, 5
        jp public_623048f
        mov eax, dword ptr ds : [esi]
        add ecx, 0xC
        push edx
        push ecx
        mov edi, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edi+0xA4]
        mov ecx, dword ptr ss : [esp+0x10]
        public_623048f : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x10], ecx
        jne public_623046b
        public_6230499 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0xA0]
        add esi, 4
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        public_62304b7 : nop
        cmp esi, dword ptr ss : [esp+0x14]
        jne public_62303d4
        public_62304c1 : nop
        lea esi, ss:[ebp+0xB4]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_62307b0
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], edi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x28], 2
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        call public_6230790
        mov ecx, dword ptr ss : [esp+0x30]
        mov byte ptr ss : [esp+0x28], 3
        cmp ecx, edi
        je public_6230558
        public_6230502 : nop
        fld dword ptr ds : [ecx+0x24]
        fcomp dword ptr ds : [ecx+0x28]
        fnstsw ax
        test ah, 0x41
        jp public_623057e
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [ecx+0x24]
        fstp dword ptr ds : [ecx+0x24]
        mov ecx, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [ecx+0x24]
        fcomp dword ptr ds : [ecx+0x28]
        fnstsw ax
        and eax, 0x4100
        jne public_623056f
        mov ecx, dword ptr ds : [ecx+0x6C]
        push 7
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x2C]
        test al, al
        jne public_623054a
        mov eax, dword ptr ss : [esp+0x30]
        push 1
        mov eax, dword ptr ds : [eax+0x6C]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x34]
        public_623054a : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax]
        public_6230550 : nop
        cmp ecx, edi
        mov dword ptr ss : [esp+0x30], ecx
        jne public_6230502
        public_6230558 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x1C
        ret 8
        public_623056f : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        push ecx
        mov ecx, ebp
        call public_622ff00
        jmp public_623054a
        public_623057e : nop
        mov ecx, dword ptr ds : [ecx+0x6C]
        push 7
        push ecx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        test al, al
        je public_623054a
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [ecx+0x70]
        test eax, eax
        je public_62305a4
        mov edx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [edx+0x2C]
        test al, al
        je public_623054a
        public_62305a4 : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, esp
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], esp
        push edx
        mov dword ptr ds : [eax], ecx
        mov ecx, esi
        call public_62306e0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], 0
        jmp public_6230550
        UNREACHABLE_TRAP(0x6230370)
    }
}

#undef public_62303bc
#undef public_62303d4
#undef public_6230421
#undef public_623046b
#undef public_623048f
#undef public_6230499
#undef public_62304b7
#undef public_62304c1
#undef public_6230502
#undef public_623054a
#undef public_6230550
#undef public_6230558
#undef public_623056f
#undef public_623057e
#undef public_62305a4
