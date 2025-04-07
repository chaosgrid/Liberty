#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628fd40);
CLANG_FORWARD_PROC_SYMBOL(public_628ffd0);
CLANG_FORWARD_PROC_SYMBOL(public_62903b0);
CLANG_FORWARD_PROC_SYMBOL(public_6290450);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628c342 _public_628c342
#define public_628c357 _public_628c357
#define public_628c360 _public_628c360
#define public_628c36a _public_628c36a
#define public_628c371 _public_628c371
#define public_628c375 _public_628c375
#define public_628c397 _public_628c397
#define public_628c3b6 _public_628c3b6
#define public_628c3da _public_628c3da
#define public_628c3e0 _public_628c3e0
#define public_628c400 _public_628c400

PROC_DECLARE(0x628c300, internal_628c300, public_628c300);
extern "C" NAKED register_t __cdecl internal_628c300()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+0xA4]
        test eax, eax
        push ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], eax
        je public_628c400
        lea esi, ds:[ecx+0x2C]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6290450
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov ebx, eax
        call public_62fcfb0
        mov edi, eax
        cmp edi, ebx
        je public_628c375
        public_628c342 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x11]
        test dl, dl
        jne public_628c357
        push ecx
        call public_62903b0
        add esp, 4
        jmp public_628c371
        public_628c357 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_628c36a
        nop 
        public_628c360 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_628c360
        public_628c36a : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_628c371
        mov eax, ecx
        public_628c371 : nop
        cmp eax, ebx
        jne public_628c342
        public_628c375 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, edi
        mov dword ptr ss : [esp+0xC], eax
        je public_628c3da
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [ecx]
        jne public_628c3da
        cmp ebx, ecx
        jne public_628c3da
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_628c3b6
        public_628c397 : nop
        mov edx, dword ptr ds : [edi+8]
        push edx
        mov ecx, esi
        call public_628fd40
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_628c397
        public_628c3b6 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_628c3da : nop
        cmp edi, ebx
        je public_628c400
        mov edi, edi
        public_628c3e0 : nop
        lea ecx, ss:[esp+0xC]
        mov edi, eax
        call public_628ffd0
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_62b5ff0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jne public_628c3e0
        public_628c400 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x628c300)
    }
}

#undef public_628c342
#undef public_628c357
#undef public_628c360
#undef public_628c36a
#undef public_628c371
#undef public_628c375
#undef public_628c397
#undef public_628c3b6
#undef public_628c3da
#undef public_628c3e0
#undef public_628c400
