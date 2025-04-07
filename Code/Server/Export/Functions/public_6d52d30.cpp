#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce46d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4b90);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5750);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5d30);
CLANG_FORWARD_PROC_SYMBOL(public_6d56bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d571f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a440);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a850);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d52d62 _public_6d52d62
#define public_6d52d80 _public_6d52d80
#define public_6d52d95 _public_6d52d95
#define public_6d52da0 _public_6d52da0
#define public_6d52daa _public_6d52daa
#define public_6d52db1 _public_6d52db1
#define public_6d52db5 _public_6d52db5
#define public_6d52dd7 _public_6d52dd7
#define public_6d52e00 _public_6d52e00
#define public_6d52e30 _public_6d52e30
#define public_6d52e34 _public_6d52e34
#define public_6d52e54 _public_6d52e54

PROC_DECLARE(0x6d52d30, internal_6d52d30, public_6d52d30);
extern "C" NAKED register_t __cdecl internal_6d52d30()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, ecx
        push edi
        lea eax, ss:[esp+0x1C]
        lea esi, ds:[ebx+0x30]
        push eax
        mov ecx, esi
        call public_6d571f0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [ebx+0x34]
        je public_6d52d62
        mov ecx, dword ptr ds : [eax+0x1C]
        test ecx, ecx
        je public_6d52d62
        push edi
        call public_6d56bd0
        public_6d52d62 : nop
        push edi
        mov ecx, esi
        call public_6d5a850
        push edi
        mov ecx, esi
        mov ebx, eax
        call public_6d5a440
        mov edi, eax
        cmp edi, ebx
        je public_6d52db5
        lea ebx, ds:[ebx]
        public_6d52d80 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x21]
        test dl, dl
        jne public_6d52d95
        push ecx
        call public_6ce4b90
        add esp, 4
        jmp public_6d52db1
        public_6d52d95 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d52daa
        lea ecx, ds:[ecx]
        public_6d52da0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6d52da0
        public_6d52daa : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6d52db1
        mov eax, ecx
        public_6d52db1 : nop
        cmp eax, ebx
        jne public_6d52d80
        public_6d52db5 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, edi
        mov dword ptr ss : [esp+0x18], eax
        je public_6d52e30
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [ecx]
        jne public_6d52e30
        cmp ebx, ecx
        jne public_6d52e30
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d52e00
        public_6d52dd7 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_6ce4b30
        mov edi, dword ptr ds : [edi]
        push 0
        lea ecx, ds:[ebx+0xC]
        call public_6ce5d30
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d52dd7
        public_6d52e00 : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_6d5c540
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        public_6d52e30 : nop
        cmp edi, ebx
        je public_6d52e54
        public_6d52e34 : nop
        lea ecx, ss:[esp+0x18]
        mov edi, eax
        call public_6ce5750
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6ce46d0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        jne public_6d52e34
        public_6d52e54 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d52d30)
    }
}

#undef public_6d52d62
#undef public_6d52d80
#undef public_6d52d95
#undef public_6d52da0
#undef public_6d52daa
#undef public_6d52db1
#undef public_6d52db5
#undef public_6d52dd7
#undef public_6d52e00
#undef public_6d52e30
#undef public_6d52e34
#undef public_6d52e54
