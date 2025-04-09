#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ee60);
CLANG_FORWARD_PROC_SYMBOL(public_470fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4713b0);
CLANG_FORWARD_PROC_SYMBOL(public_4716f0);
CLANG_FORWARD_PROC_SYMBOL(public_536020);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46ee90 _public_46ee90
#define public_46eeb8 _public_46eeb8
#define public_46eedd _public_46eedd
#define public_46eee1 _public_46eee1
#define public_46ef01 _public_46ef01

PROC_DECLARE(0x46ee60, internal_46ee60, public_46ee60);
extern "C" NAKED register_t __cdecl internal_46ee60()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_46eedd
        mov ecx, eax
        cmp eax, ecx
        jne public_46eedd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_46eeb8
        nop 
        lea esp, ss:[esp]
        public_46ee90 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4713b0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_4716f0
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_46ee90
        public_46eeb8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_53e430
        jmp public_46ef01
        public_46eedd : nop
        cmp eax, edi
        je public_46ef01
        public_46eee1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_536020
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_470fd0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_46eee1
        public_46ef01 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x46ee60)
    }
}

#undef public_46ee90
#undef public_46eeb8
#undef public_46eedd
#undef public_46eee1
#undef public_46ef01
