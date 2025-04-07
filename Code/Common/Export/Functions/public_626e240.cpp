#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f01f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392728);

#define public_626e344 _public_626e344
#define public_626e34f _public_626e34f
#define public_626e355 _public_626e355
#define public_626e380 _public_626e380
#define public_626e388 _public_626e388
#define public_626e392 _public_626e392

PROC_DECLARE(0x626e240, internal_626e240, public_626e240);
extern "C" NAKED register_t __cdecl internal_626e240()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392728 @0x626e242*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392728
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        push esi
        mov dword ptr ss : [esp+0xC], edi
        call public_62f01f0
        mov eax, dword ptr ds : [esi+0x5C]
        mov dword ptr ds : [edi+0x5C], eax
        mov cl, byte ptr ds : [esi+0x60]
        mov byte ptr ds : [edi+0x60], cl
        mov edx, dword ptr ds : [esi+0x64]
        mov dword ptr ds : [edi+0x64], edx
        mov eax, dword ptr ds : [esi+0x68]
        mov dword ptr ds : [edi+0x68], eax
        mov cl, byte ptr ds : [esi+0x6C]
        mov dword ptr ds : [edi], offset public_6399870
        mov byte ptr ds : [edi+0x6C], cl
        mov edx, dword ptr ds : [esi+0x70]
        mov dword ptr ds : [edi+0x70], edx
        mov eax, dword ptr ds : [esi+0x74]
        mov dword ptr ds : [edi+0x74], eax
        mov ecx, dword ptr ds : [esi+0x78]
        mov dword ptr ds : [edi+0x78], ecx
        mov edx, dword ptr ds : [esi+0x7C]
        mov dword ptr ds : [edi+0x7C], edx
        mov eax, dword ptr ds : [esi+0x80]
        mov dword ptr ds : [edi+0x80], eax
        mov ecx, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [edi+0x84], ecx
        mov dword ptr ds : [edi], offset public_6399b04
        mov edx, dword ptr ds : [esi+0x88]
        mov dword ptr ds : [edi+0x88], edx
        mov eax, dword ptr ds : [esi+0x8C]
        mov dword ptr ds : [edi+0x8C], eax
        mov ecx, dword ptr ds : [esi+0x90]
        mov dword ptr ds : [edi+0x90], ecx
        mov edx, dword ptr ds : [esi+0x94]
        mov dword ptr ds : [edi+0x94], edx
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ds : [edi+0x98], eax
        mov ecx, dword ptr ds : [esi+0x9C]
        mov dword ptr ds : [edi+0x9C], ecx
        mov edx, dword ptr ds : [esi+0xA0]
        mov dword ptr ds : [edi+0xA0], edx
        mov eax, dword ptr ds : [esi+0xA4]
        mov dword ptr ds : [edi+0xA4], eax
        mov cl, byte ptr ds : [esi+0xA8]
        mov byte ptr ds : [edi+0xA8], cl
        mov ecx, dword ptr ds : [esi+0xAC]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], 0
        jne public_626e344
        xor eax, eax
        jmp public_626e34f
        public_626e344 : nop
        mov eax, dword ptr ds : [esi+0xB0]
        sub eax, ecx
        sar eax, 2
        public_626e34f : nop
        test eax, eax
        jge public_626e355
        xor eax, eax
        public_626e355 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov dword ptr ds : [edi+0xAC], eax
        mov ecx, dword ptr ds : [esi+0xB0]
        mov esi, dword ptr ds : [esi+0xAC]
        add esp, 4
        cmp esi, ecx
        je public_626e392
        nop 
        lea esp, ss:[esp]
        public_626e380 : nop
        test eax, eax
        je public_626e388
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_626e388 : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_626e380
        public_626e392 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edi+0xB0], eax
        mov dword ptr ds : [edi+0xB4], eax
        mov dword ptr ds : [edi], offset public_6399bb4
        mov eax, edi
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x626e240)
    }
}

#undef public_626e344
#undef public_626e34f
#undef public_626e355
#undef public_626e380
#undef public_626e388
#undef public_626e392
