#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bbfb0);
CLANG_FORWARD_PROC_SYMBOL(public_4bc2a0);
CLANG_FORWARD_PROC_SYMBOL(public_579970);

#define public_4bbfe2 _public_4bbfe2
#define public_4bbfec _public_4bbfec
#define public_4bc008 _public_4bc008
#define public_4bc014 _public_4bc014
#define public_4bc07c _public_4bc07c

PROC_DECLARE(0x4bbfb0, internal_4bbfb0, public_4bbfb0);
extern "C" NAKED register_t __cdecl internal_4bbfb0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        call public_579970
        mov al, byte ptr ds : [esi+0x37C]
        test al, al
        je public_4bbfe2
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x380], edx
        jmp public_4bbfec
        public_4bbfe2 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x384], eax
        public_4bbfec : nop
        mov bl, byte ptr ss : [esp+0x14]
        test bl, bl
        mov byte ptr ds : [esi+0x37C], bl
        je public_4bc008
        mov ecx, dword ptr ds : [esi+0x380]
        mov dword ptr ds : [esi+0x388], ecx
        jmp public_4bc014
        public_4bc008 : nop
        mov edx, dword ptr ds : [esi+0x384]
        mov dword ptr ds : [esi+0x388], edx
        public_4bc014 : nop
        mov ecx, dword ptr ds : [esi+0x36C]
        test ecx, ecx
        je public_4bc07c
        mov eax, dword ptr ds : [esi+0x374]
        test eax, eax
        je public_4bc07c
        mov eax, dword ptr ds : [ecx]
        push edi
        movzx edi, bl
        push 0
        push edi
        push 0xC
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x370]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x374]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test bl, bl
        sete al
        push 0
        mov edi, eax
        push edi
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x378]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 0xC
        call dword ptr ds : [eax+0xA8]
        pop edi
        public_4bc07c : nop
        mov ecx, esi
        call public_4bc2a0
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x4bbfb0)
    }
}

#undef public_4bbfe2
#undef public_4bbfec
#undef public_4bc008
#undef public_4bc014
#undef public_4bc07c
