#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f29680);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d250);
CLANG_FORWARD_PROC_SYMBOL(public_6f2dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2df90);
CLANG_FORWARD_PROC_SYMBOL(public_6f46640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2d278 _public_6f2d278
#define public_6f2d29f _public_6f2d29f
#define public_6f2d2c1 _public_6f2d2c1
#define public_6f2d2c5 _public_6f2d2c5
#define public_6f2d2e5 _public_6f2d2e5

PROC_DECLARE(0x6f2d250, internal_6f2d250, public_6f2d250);
extern "C" NAKED register_t __cdecl internal_6f2d250()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_6f2d2c1
        mov ecx, eax
        cmp eax, ecx
        jne public_6f2d2c1
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f2d29f
        public_6f2d278 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f2df90
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6f29680
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f2d278
        public_6f2d29f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_6f2d2c1 : nop
        cmp eax, edi
        je public_6f2d2e5
        public_6f2d2c5 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6f46640
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f2dbb0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_6f2d2c5
        public_6f2d2e5 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f2d250)
    }
}

#undef public_6f2d278
#undef public_6f2d29f
#undef public_6f2d2c1
#undef public_6f2d2c5
#undef public_6f2d2e5
