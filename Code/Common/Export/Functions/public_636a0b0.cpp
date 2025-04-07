#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);
CLANG_FORWARD_PROC_SYMBOL(public_636a0b0);
CLANG_FORWARD_PROC_SYMBOL(public_636a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_636a2b0);
CLANG_FORWARD_PROC_SYMBOL(public_636a350);
CLANG_FORWARD_PROC_SYMBOL(public_636a640);
CLANG_FORWARD_PROC_SYMBOL(public_636b190);
CLANG_FORWARD_PROC_SYMBOL(public_636b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_636b740);

#define public_636a0dc _public_636a0dc
#define public_636a0f1 _public_636a0f1
#define public_636a115 _public_636a115
#define public_636a17a _public_636a17a

PROC_DECLARE(0x636a0b0, internal_636a0b0, public_636a0b0);
extern "C" NAKED register_t __cdecl internal_636a0b0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        xor ebp, ebp
        cmp esi, ebp
        push edi
        mov edi, 1
        mov ebx, ecx
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x1C], edi
        jne public_636a0dc
        lea esi, ss:[esp+0x10]
        public_636a0dc : nop
        mov dword ptr ds : [ebx+0x6C], esi
        cmp word ptr ds : [ebx+0x1A], bp
        jne public_636a0f1
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 4
        public_636a0f1 : nop
        mov ecx, ebx
        call public_636a350
        push 0x3F800000
        mov ecx, ebx
        call public_636a640
        cmp dword ptr ds : [esi], ebp
        je public_636a115
        cmp word ptr ds : [ebx+0x1A], di
        jbe public_636a115
        mov ecx, ebx
        call public_636a1e0
        public_636a115 : nop
        mov ecx, ebx
        call public_636b190
        mov ecx, ebx
        call public_636b740
        mov ecx, ebx
        call public_636b6a0
        mov ecx, ebx
        call public_636a2b0
        cmp dword ptr ds : [ebx+4], edi
        mov ebp, dword ptr ds : [ebx]
        jle public_636a17a
        mov eax, dword ptr ds : [ebx+0x6C]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        jne public_636a17a
        cmp dword ptr ds : [eax+0xC], edi
        jne public_636a17a
        mov eax, dword ptr ss : [ebp+0x1C]
        sar eax, 8
        push 0x10
        push eax
        call public_6343fc0
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0x1C]
        sar ecx, 8
        mov edx, ecx
        mov ebp, eax
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx]
        push eax
        call public_6343ff0
        add esp, 0xC
        public_636a17a : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        mov dword ptr ds : [ebx], 0
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x636a0b0)
    }
}

#undef public_636a0dc
#undef public_636a0f1
#undef public_636a115
#undef public_636a17a
