#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_592080);
CLANG_FORWARD_PROC_SYMBOL(public_594900);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4a58);

#define public_5920b0 _public_5920b0
#define public_5920d2 _public_5920d2
#define public_592112 _public_592112
#define public_592117 _public_592117
#define public_592138 _public_592138

PROC_DECLARE(0x592080, internal_592080, public_592080);
extern "C" NAKED register_t __cdecl internal_592080()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4a58 @0x592082*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4a58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        xor ebp, ebp
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], ebp
        je public_5920d2
        public_5920b0 : nop
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_5b7e1d
        add esp, 4
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_46dfb0
        mov edi, dword ptr ss : [esp+0xC]
        cmp edi, dword ptr ds : [esi+4]
        jne public_5920b0
        public_5920d2 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebp
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], eax
        je public_592112
        mov ecx, eax
        cmp eax, ecx
        jne public_592112
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_594900
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_592138
        public_592112 : nop
        cmp eax, edi
        je public_592138
        push ebx
        public_592117 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_595150
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_46dfb0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_592117
        pop ebx
        public_592138 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov dword ptr ds : [esi+8], ebp
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x592080)
    }
}

#undef public_5920b0
#undef public_5920d2
#undef public_592112
#undef public_592117
#undef public_592138
