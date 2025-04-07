#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);

#define public_6312ed7 _public_6312ed7
#define public_6312f28 _public_6312f28
#define public_6312f3c _public_6312f3c
#define public_6312fe2 _public_6312fe2

PROC_DECLARE(0x6312ea0, internal_6312ea0, public_6312ea0);
extern "C" NAKED register_t __cdecl internal_6312ea0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+8]
        mov esi, ecx
        mov ebp, 4
        push ebp
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6312890
        mov edi, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [edi]
        cmp ebx, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_6312fe2
        public_6312ed7 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        push ebp
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], edx
        call public_6312890
        mov eax, dword ptr ds : [ebx+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        push ebp
        je public_6312f28
        or ecx, 0xFFFFFFFF
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], edi
        call public_6312890
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        mov ecx, esi
        call public_6312890
        mov edi, dword ptr ss : [esp+0x14]
        jmp public_6312f3c
        public_6312f28 : nop
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_6312890
        public_6312f3c : nop
        mov ecx, dword ptr ds : [ebx+0x1C]
        push ebp
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], ecx
        push edx
        mov ecx, esi
        call public_6312890
        fld dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        add edx, ebp
        mov dword ptr ds : [esi+8], edx
        mov eax, edx
        mov edx, 0xFFFFFFFC
        add ecx, edx
        mov dword ptr ds : [esi+0xC], ecx
        add dword ptr ds : [esi+0x10], ebp
        movzx ecx, word ptr ds : [ebx+0xA]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+8]
        add ecx, edx
        mov edx, dword ptr ds : [esi+0x10]
        add eax, ebp
        add edx, ebp
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], edx
        mov dword ptr ds : [esi+8], eax
        mov cl, byte ptr ds : [ebx+0x14]
        test cl, cl
        setne cl
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        inc edx
        mov dword ptr ds : [esi+8], edx
        dec ecx
        mov eax, edx
        mov edx, dword ptr ds : [esi+0x10]
        inc edx
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], edx
        mov cl, byte ptr ds : [ebx+0x20]
        test cl, cl
        setne cl
        mov byte ptr ds : [eax], cl
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x10]
        inc eax
        dec edx
        inc ecx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi+0x10], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, edi
        jne public_6312ed7
        public_6312fe2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6312ea0)
    }
}

#undef public_6312ed7
#undef public_6312f28
#undef public_6312f3c
#undef public_6312fe2
