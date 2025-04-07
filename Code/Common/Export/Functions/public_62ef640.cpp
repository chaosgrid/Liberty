#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62ef640);
CLANG_FORWARD_PROC_SYMBOL(public_62fcdf0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62ef650 _public_62ef650
#define public_62ef680 _public_62ef680
#define public_62ef69f _public_62ef69f
#define public_62ef6c4 _public_62ef6c4
#define public_62ef6c8 _public_62ef6c8
#define public_62ef6e8 _public_62ef6e8

PROC_DECLARE(0x62ef640, internal_62ef640, public_62ef640);
extern "C" NAKED register_t __cdecl internal_62ef640()
{
    __asm
    {
        mov ecx, offset public_63fcac0
        jmp public_62ef650
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_62ef650 : nop
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
        je public_62ef6c4
        mov ecx, eax
        cmp eax, ecx
        jne public_62ef6c4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62ef69f
        nop 
        lea esp, ss:[esp]
        public_62ef680 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62fcdf0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62ef680
        public_62ef69f : nop
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
        call public_632c410
        jmp public_62ef6e8
        public_62ef6c4 : nop
        cmp eax, edi
        je public_62ef6e8
        public_62ef6c8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_63429f0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62be400
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62ef6c8
        public_62ef6e8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62ef640)
    }
}

#undef public_62ef650
#undef public_62ef680
#undef public_62ef69f
#undef public_62ef6c4
#undef public_62ef6c8
#undef public_62ef6e8
