#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6345550);
CLANG_FORWARD_PROC_SYMBOL(public_63495c0);
CLANG_FORWARD_PROC_SYMBOL(public_63495e0);
CLANG_FORWARD_PROC_SYMBOL(public_634bb20);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6344fd1 _public_6344fd1
#define public_6344fec _public_6344fec
#define public_6344ffc _public_6344ffc
#define public_63450cc _public_63450cc

PROC_DECLARE(0x6344fb0, internal_6344fb0, public_6344fb0);
extern "C" NAKED register_t __cdecl internal_6344fb0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ds : [ecx+0x98]
        mov eax, dword ptr ds : [esi]
        test al, 0xC
        jne public_63450cc
        test al, 0x30
        je public_6344fd1
        mov ecx, dword ptr ds : [esi+0xC]
        push esi
        call public_634bb20
        public_6344fd1 : nop
        mov eax, dword ptr ds : [esi+0x60]
        shl eax, 0x18
        cmp eax, 0x8000000
        jge public_63450cc
        push edi
        xor edi, edi
        mov di, word ptr ds : [esi+0x52]
        dec edi
        js public_6344ffc
        public_6344fec : nop
        mov ecx, dword ptr ds : [esi+0x54]
        mov ecx, dword ptr ds : [ecx+edi*4]
        push 1
        call public_6345550
        dec edi
        jns public_6344fec
        public_6344ffc : nop
        mov edx, dword ptr ds : [esi+0xE4]
        mov dword ptr ds : [esi+0x170], edx
        mov eax, dword ptr ds : [esi+0xE8]
        mov dword ptr ds : [esi+0x174], eax
        mov ecx, dword ptr ds : [esi+0xEC]
        mov dword ptr ds : [esi+0x178], ecx
        mov edx, dword ptr ds : [esi+0xF0]
        mov dword ptr ds : [esi+0x17C], edx
        fld dword ptr ds : [esi+0xB8]
        fld dword ptr ds : [esi+0xB4]
        mov eax, dword ptr ds : [esi+0xBC]
        mov ecx, eax
        fstp dword ptr ds : [esi+0x190]
        mov dword ptr ds : [esi+0x198], ecx
        fstp dword ptr ds : [esi+0x194]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [edx+0xFC]
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+8]
        fsub dword ptr ds : [public_63a543c]
        mov dword ptr ss : [esp+0xC], ecx
        fadd dword ptr ss : [esp+0xC]
        fld st(0)
        call public_6391dae
        mov ecx, dword ptr ds : [esi+0x15C]
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fst dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+8]
        fxch 
        mov dword ptr ds : [esi+0x160], edx
        fsub st, st(1)
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x164], eax
        fstp st(0)
        call public_63495c0
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+0x15C]
        call public_63495e0
        pop edi
        pop esi
        add esp, 8
        ret 
        public_63450cc : nop
        mov eax, 1
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6344fb0)
    }
}

#undef public_6344fd1
#undef public_6344fec
#undef public_6344ffc
#undef public_63450cc
