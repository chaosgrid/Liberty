#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efcbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6efccd0);
CLANG_FORWARD_PROC_SYMBOL(public_6efeb00);
CLANG_FORWARD_PROC_SYMBOL(public_6f66c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);

#define public_6f66ca2 _public_6f66ca2
#define public_6f66cce _public_6f66cce
#define public_6f66cec _public_6f66cec
#define public_6f66cf3 _public_6f66cf3
#define public_6f66d0a _public_6f66d0a
#define public_6f66d11 _public_6f66d11
#define public_6f66d39 _public_6f66d39
#define public_6f66d77 _public_6f66d77
#define public_6f66dac _public_6f66dac

PROC_DECLARE(0x6f66c80, internal_6f66c80, public_6f66c80);
extern "C" NAKED register_t __cdecl internal_6f66c80()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push esi
        push edi
        call public_6efeb00
        mov ebx, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        xor esi, esi
        cmp ecx, eax
        mov dword ptr ss : [esp+0xC], ecx
        je public_6f66cec
        public_6f66ca2 : nop
        mov edi, dword ptr ss : [esp+0x80]
        push esi
        mov ecx, edi
        call public_6efccd0
        test al, al
        jne public_6f66cce
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x50], esi
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x4C], edi
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+0x54], eax
        public_6f66cce : nop
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6f68e30
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+4]
        inc esi
        cmp edx, eax
        jne public_6f66ca2
        jmp public_6f66cf3
        public_6f66cec : nop
        mov edi, dword ptr ss : [esp+0x80]
        public_6f66cf3 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_6f66dac
        push ebp
        mov ebp, dword ptr ss : [esp+0x88]
        jmp public_6f66d11
        public_6f66d0a : nop
        mov edi, dword ptr ss : [esp+0x84]
        public_6f66d11 : nop
        mov edx, dword ptr ds : [ebx+0x50]
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edx
        mov ecx, edi
        call public_6efcbe0
        mov eax, dword ptr ds : [public_6fd1c70]
        test eax, eax
        jne public_6f66d39
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f66d39 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        push ebp
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ds:[ebx+0xBC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [public_6fd1c70]
        test eax, eax
        jne public_6f66d77
        call public_6fa8fa0
        mov dword ptr ds : [public_6fd1c70], eax
        public_6f66d77 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        push ebp
        lea ecx, ss:[esp+0x60]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ss : [esp+0x80]
        lea edi, ds:[ebx+0x98]
        mov ebx, dword ptr ds : [ebx]
        mov ecx, 9
        lea esi, ss:[esp+0x58]
        rep movsd
        cmp ebx, dword ptr ds : [edx+4]
        jne public_6f66d0a
        pop ebp
        public_6f66dac : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x6C
        ret 
        UNREACHABLE_TRAP(0x6f66c80)
    }
}

#undef public_6f66ca2
#undef public_6f66cce
#undef public_6f66cec
#undef public_6f66cf3
#undef public_6f66d0a
#undef public_6f66d11
#undef public_6f66d39
#undef public_6f66d77
#undef public_6f66dac
