#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401780);
CLANG_FORWARD_PROC_SYMBOL(public_532fc0);
CLANG_FORWARD_PROC_SYMBOL(public_535d90);
CLANG_FORWARD_PROC_SYMBOL(public_536020);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_532ff0 _public_532ff0
#define public_53300f _public_53300f
#define public_533034 _public_533034
#define public_533038 _public_533038
#define public_533058 _public_533058

PROC_DECLARE(0x532fc0, internal_532fc0, public_532fc0);
extern "C" NAKED register_t __cdecl internal_532fc0()
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
        je public_533034
        mov ecx, eax
        cmp eax, ecx
        jne public_533034
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_53300f
        nop 
        lea esp, ss:[esp]
        public_532ff0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_535d90
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_532ff0
        public_53300f : nop
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
        jmp public_533058
        public_533034 : nop
        cmp eax, edi
        je public_533058
        public_533038 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_536020
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_401780
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_533038
        public_533058 : nop
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
        UNREACHABLE_TRAP(0x532fc0)
    }
}

#undef public_532ff0
#undef public_53300f
#undef public_533034
#undef public_533038
#undef public_533058
