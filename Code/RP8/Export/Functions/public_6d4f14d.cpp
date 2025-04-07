#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d317dd);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e899);
CLANG_FORWARD_PROC_SYMBOL(public_6d4e9c6);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f039);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f06f);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f139);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f14d);

#define public_6d4f19d _public_6d4f19d
#define public_6d4f1bb _public_6d4f1bb
#define public_6d4f1d2 _public_6d4f1d2

PROC_DECLARE(0x6d4f14d, internal_6d4f14d, public_6d4f14d);
extern "C" NAKED register_t __cdecl internal_6d4f14d()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+4]
        push 0x58
        push 1
        push esi
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x1A4], eax
        and dword ptr ds : [eax+0x44], 0
        and dword ptr ds : [eax+0x34], 0
        add esp, 0xC
        mov dword ptr ds : [eax], offset _public_6d4f06f
        mov dword ptr ds : [eax+8], offset _public_6d317dd
        mov dword ptr ds : [eax+0xC], offset _public_6d4f139
        push 4
        pop eax
        cmp dword ptr ds : [esi+0x64], eax
        jle public_6d4f19d
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x36
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4f19d : nop
        mov eax, 0x100
        cmp dword ptr ds : [esi+0x54], eax
        jle public_6d4f1bb
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x38
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4f1bb : nop
        call public_6d4e899
        push esi
        call public_6d4e9c6
        cmp dword ptr ds : [esi+0x4C], 2
        pop ecx
        jne public_6d4f1d2
        call public_6d4f039
        public_6d4f1d2 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d4f14d)
    }
}

#undef public_6d4f19d
#undef public_6d4f1bb
#undef public_6d4f1d2
