#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_626a620);
CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62fb6e0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcce0);
CLANG_FORWARD_PROC_SYMBOL(public_630cb40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62ef058 _public_62ef058
#define public_62ef070 _public_62ef070
#define public_62ef076 _public_62ef076
#define public_62ef090 _public_62ef090
#define public_62ef094 _public_62ef094
#define public_62ef0ae _public_62ef0ae
#define public_62ef0b2 _public_62ef0b2
#define public_62ef0e9 _public_62ef0e9
#define public_62ef0f1 _public_62ef0f1
#define public_62ef0fc _public_62ef0fc
#define public_62ef104 _public_62ef104
#define public_62ef13a _public_62ef13a
#define public_62ef18e _public_62ef18e
#define public_62ef1b6 _public_62ef1b6
#define public_62ef1db _public_62ef1db
#define public_62ef1df _public_62ef1df

PROC_DECLARE(0x62ef000, internal_62ef000, public_62ef000);
extern "C" NAKED register_t __cdecl internal_62ef000()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx]
        push ebp
        mov ebp, ecx
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp+0x14], edx
        mov eax, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [ebp+0x18], eax
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov dword ptr ss : [ebp+0x1C], ecx
        lea ecx, ds:[ebx+0x20]
        lea eax, ss:[ebp+0x20]
        cmp eax, ecx
        push esi
        push edi
        je public_62ef0b2
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [ecx+4]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62ef070
        public_62ef058 : nop
        cmp edi, ecx
        je public_62ef070
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov edi, dword ptr ds : [edi]
        jne public_62ef058
        public_62ef070 : nop
        cmp eax, esi
        mov ebx, eax
        je public_62ef090
        public_62ef076 : nop
        mov eax, ebx
        mov ebx, dword ptr ds : [ebx]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[ebp+0x20]
        call public_6271cc0
        cmp ebx, esi
        jne public_62ef076
        mov ecx, dword ptr ss : [esp+0x10]
        public_62ef090 : nop
        cmp edi, ecx
        je public_62ef0ae
        public_62ef094 : nop
        lea ecx, ds:[edi+8]
        push ecx
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[ebp+0x20]
        call public_62fcce0
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [esp+0x10]
        jne public_62ef094
        public_62ef0ae : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_62ef0b2 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov dword ptr ss : [ebp+0x2C], eax
        mov ecx, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [ebp+0x30], ecx
        mov edx, dword ptr ds : [ebx+0x34]
        mov dword ptr ss : [ebp+0x34], edx
        mov eax, dword ptr ds : [ebx+0x38]
        mov dword ptr ss : [ebp+0x38], eax
        mov ecx, dword ptr ds : [ebx+0x3C]
        lea edi, ds:[ebx+0x40]
        lea esi, ss:[ebp+0x40]
        cmp esi, edi
        mov dword ptr ss : [ebp+0x3C], ecx
        je public_62ef1df
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_62ef0e9
        xor edx, edx
        jmp public_62ef0f1
        public_62ef0e9 : nop
        mov edx, dword ptr ds : [edi+8]
        sub edx, eax
        sar edx, 2
        public_62ef0f1 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_62ef0fc
        xor eax, eax
        jmp public_62ef104
        public_62ef0fc : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_62ef104 : nop
        cmp edx, eax
        ja public_62ef13a
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_630cb40
        mov edx, dword ptr ds : [esi+8]
        add esp, 0xC
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, edi
        call public_626a600
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_62ef1df
        public_62ef13a : nop
        mov ecx, edi
        call public_626a600
        mov ecx, esi
        mov ebx, eax
        call public_626a620
        cmp ebx, eax
        ja public_62ef18e
        mov ebx, dword ptr ds : [edi+4]
        mov ecx, esi
        call public_626a600
        mov ecx, dword ptr ds : [edi+4]
        lea ebx, ds:[ebx+eax*4]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push ebx
        push ecx
        call public_630cb40
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push edx
        push eax
        push ebx
        mov ecx, esi
        call public_627f7b0
        mov ecx, edi
        call public_626a600
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_62ef1db
        public_62ef18e : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_628f050
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        add esp, 4
        mov ecx, edi
        call public_626a600
        test eax, eax
        jge public_62ef1b6
        xor eax, eax
        public_62ef1b6 : nop
        shl eax, 2
        push eax
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_62ef1db : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_62ef1df : nop
        add ebx, 0x50
        push ebx
        lea ecx, ss:[ebp+0x50]
        call public_62fb6e0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62ef000)
    }
}

#undef public_62ef058
#undef public_62ef070
#undef public_62ef076
#undef public_62ef090
#undef public_62ef094
#undef public_62ef0ae
#undef public_62ef0b2
#undef public_62ef0e9
#undef public_62ef0f1
#undef public_62ef0fc
#undef public_62ef104
#undef public_62ef13a
#undef public_62ef18e
#undef public_62ef1b6
#undef public_62ef1db
#undef public_62ef1df
