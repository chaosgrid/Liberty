#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21b10);
CLANG_FORWARD_PROC_SYMBOL(public_6c21ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6c292f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c29360);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);
CLANG_FORWARD_PROC_SYMBOL(public_6c304a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34b60);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c21799 _public_6c21799
#define public_6c217bf _public_6c217bf
#define public_6c217e7 _public_6c217e7
#define public_6c217fe _public_6c217fe
#define public_6c21825 _public_6c21825
#define public_6c21834 _public_6c21834
#define public_6c2187b _public_6c2187b
#define public_6c21880 _public_6c21880
#define public_6c218a0 _public_6c218a0

PROC_DECLARE(0x6c21770, internal_6c21770, public_6c21770);
extern "C" NAKED register_t __cdecl internal_6c21770()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ds : [esi+0x28]
        inc ecx
        test al, al
        push edi
        mov dword ptr ds : [esi+4], ecx
        je public_6c21799
        mov edi, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, dword ptr ss : [esp+0x1C]
        jne public_6c21799
        inc dword ptr ds : [esi+8]
        jmp public_6c217bf
        public_6c21799 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ds:[esi+0xC]
        call public_6c2a270
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, dword ptr ds : [esi+0x10]
        je public_6c218a0
        mov dword ptr ds : [esi+0x24], edi
        mov byte ptr ds : [esi+0x28], 1
        public_6c217bf : nop
        cmp edi, dword ptr ds : [esi+0x10]
        je public_6c218a0
        mov ecx, dword ptr ds : [edi+0x10]
        call public_6c29360
        mov edi, dword ptr ds : [edi+0x10]
        test edi, edi
        je public_6c217e7
        mov ecx, edi
        call public_6c292f0
        push edi
        call public_6c34ea0
        add esp, 4
        public_6c217e7 : nop
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        je public_6c217fe
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x1C]
        jne public_6c217fe
        mov byte ptr ds : [esi+0x28], 0
        public_6c217fe : nop
        lea edx, ss:[esp+0x1C]
        add esi, 0xC
        push edx
        mov ecx, esi
        call public_6c34b60
        mov ebp, eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6c34ab0
        mov edi, eax
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], edi
        je public_6c21834
        public_6c21825 : nop
        lea ecx, ss:[esp+0x18]
        call public_6c304a0
        cmp dword ptr ss : [esp+0x18], ebp
        jne public_6c21825
        public_6c21834 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_6c2187b
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [ecx]
        jne public_6c2187b
        cmp ebp, ecx
        jne public_6c2187b
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, esi
        call public_6c21ee0
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        add esp, 8
        ret 0xC
        public_6c2187b : nop
        cmp edi, ebp
        je public_6c218a0
        nop 
        public_6c21880 : nop
        lea ecx, ss:[esp+0xC]
        mov edi, eax
        call public_6c304a0
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call public_6c21b10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebp
        jne public_6c21880
        public_6c218a0 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6c21770)
    }
}

#undef public_6c21799
#undef public_6c217bf
#undef public_6c217e7
#undef public_6c217fe
#undef public_6c21825
#undef public_6c21834
#undef public_6c2187b
#undef public_6c21880
#undef public_6c218a0
