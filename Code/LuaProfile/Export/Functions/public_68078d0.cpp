#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806870);
CLANG_FORWARD_PROC_SYMBOL(public_6806990);
CLANG_FORWARD_PROC_SYMBOL(public_6806ed0);
CLANG_FORWARD_PROC_SYMBOL(public_68074b0);
CLANG_FORWARD_PROC_SYMBOL(public_68075c0);
CLANG_FORWARD_PROC_SYMBOL(public_6807630);
CLANG_FORWARD_PROC_SYMBOL(public_68078d0);

#define public_6807920 _public_6807920
#define public_680792d _public_680792d
#define public_680794e _public_680794e

PROC_DECLARE(0x68078d0, internal_68078d0, public_68078d0);
extern "C" NAKED register_t __cdecl internal_68078d0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [edi+8]
        push ebx
        call public_68075c0
        mov edx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edx+8]
        mov esi, dword ptr ss : [esp+0x20]
        mov ecx, eax
        shl eax, 4
        mov dword ptr ds : [edx+eax], 0xFFFFFFFC
        mov edx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edx+8]
        mov ebp, dword ptr ds : [esi]
        mov dword ptr ds : [edx+eax+8], ebp
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6807920
        push ecx
        push edi
        call public_68074b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6807920 : nop
        xor ebp, ebp
        test eax, eax
        jle public_680794e
        lea eax, ds:[esi+0x24]
        mov dword ptr ss : [esp+0x18], eax
        public_680792d : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        push edi
        call public_6807630
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 8
        inc ebp
        add ecx, 8
        cmp ebp, eax
        mov dword ptr ss : [esp+0x18], ecx
        jl public_680792d
        public_680794e : nop
        push 1
        push edi
        call public_6806990
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        neg edx
        push edx
        push eax
        push 0x3A
        push edi
        call public_6806ed0
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x18]
        push ecx
        push ebx
        call public_6806870
        add esp, 0x20
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x68078d0)
    }
}

#undef public_6807920
#undef public_680792d
#undef public_680794e
