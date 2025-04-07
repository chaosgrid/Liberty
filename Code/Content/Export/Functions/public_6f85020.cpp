#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f38a50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f85048 _public_6f85048
#define public_6f85050 _public_6f85050
#define public_6f85061 _public_6f85061
#define public_6f8506f _public_6f8506f
#define public_6f85090 _public_6f85090
#define public_6f8509f _public_6f8509f
#define public_6f850ee _public_6f850ee
#define public_6f85148 _public_6f85148
#define public_6f8514d _public_6f8514d
#define public_6f8515e _public_6f8515e
#define public_6f851dd _public_6f851dd
#define public_6f85220 _public_6f85220
#define public_6f8522f _public_6f8522f
#define public_6f85244 _public_6f85244
#define public_6f85253 _public_6f85253
#define public_6f85260 _public_6f85260
#define public_6f8526d _public_6f8526d
#define public_6f85273 _public_6f85273
#define public_6f852a1 _public_6f852a1

PROC_DECLARE(0x6f85020, internal_6f85020, public_6f85020);
extern "C" NAKED register_t __cdecl internal_6f85020()
{
    __asm
    {
        sub esp, 0x58
        push esi
        mov esi, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        mov eax, dword ptr ds : [esi+8]
        cmp eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+8], eax
        je public_6f852a1
        push ebx
        push ebp
        push edi
        jmp public_6f85050
        public_6f85048 : nop
        mov eax, dword ptr ss : [esp+0x14]
        lea esp, ss:[esp]
        public_6f85050 : nop
        mov ebx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x1C]
        mov edi, dword ptr ds : [ebx+0x18]
        lea esi, ds:[ebx+0x14]
        mov eax, ecx
        cmp eax, ecx
        je public_6f8506f
        public_6f85061 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        add eax, 4
        add edi, 4
        cmp eax, ecx
        jne public_6f85061
        public_6f8506f : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push edi
        mov ecx, esi
        call public_6ea1490
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [ebx+0x38]
        mov ebp, dword ptr ds : [ebx+0x34]
        lea edi, ds:[ebx+0x30]
        mov eax, ecx
        cmp eax, ecx
        je public_6f8509f
        lea ecx, ds:[ecx]
        public_6f85090 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp], edx
        add eax, 4
        add ebp, 4
        cmp eax, ecx
        jne public_6f85090
        public_6f8509f : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        push ebp
        mov ecx, edi
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x70]
        mov dword ptr ds : [edi+8], ebp
        mov ebp, dword ptr ss : [esp+0x74]
        mov edi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        push ebp
        push eax
        push ebx
        push 1
        mov ecx, edi
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [edi]
        push ebp
        push eax
        push ebx
        push 0
        mov ecx, edi
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        lea edi, ds:[ebx+0xC]
        jne public_6f850ee
        lea ecx, ds:[ebx+4]
        push edi
        push ecx
        call dword ptr ds : [public_6fb3444]
        add esp, 8
        public_6f850ee : nop
        mov edx, dword ptr ds : [edi]
        push edx
/*FIXUP push offset public_6fb6064 @0x6f850f1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ds:[ebx+0x4C]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x38]
        push edx
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        add esp, 0x14
        cmp ecx, 1
        mov edi, eax
        jae public_6f851dd
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6f85148
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_6f85148
        mov ecx, esi
        call public_6fa3db0
        mov ebp, eax
        jmp public_6f8514d
        public_6f85148 : nop
        mov ebp, 1
        public_6f8514d : nop
        mov ecx, esi
        call public_6fa3db0
        add eax, ebp
        mov dword ptr ss : [esp+0x20], eax
        jns public_6f8515e
        xor eax, eax
        public_6f8515e : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov ebp, eax
        mov eax, dword ptr ds : [esi+4]
        push ebp
        push edi
        push eax
        mov ecx, esi
        call public_6eed270
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], eax
        call public_6f38a50
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi+8]
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ss:[ebp+ecx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_6fa3db0
        lea eax, ss:[ebp+eax*4+4]
        mov dword ptr ds : [esi+4], ebp
        jmp public_6f85273
        public_6f851dd : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6f8522f
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6eed270
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6f38a50
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6f8526d
        lea esp, ss:[esp]
        public_6f85220 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6f85220
        jmp public_6f8526d
        public_6f8522f : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6eed270
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6f85253
        public_6f85244 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6f85244
        public_6f85253 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6f8526d
        lea esp, ss:[esp]
        public_6f85260 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f85260
        public_6f8526d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_6f85273 : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+0x28], 0x4A39
        mov byte ptr ds : [ebx+0x8C], 1
        mov edx, dword ptr ds : [ecx+0xC]
        add eax, 4
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f85048
        pop edi
        pop ebp
        pop ebx
        public_6f852a1 : nop
        pop esi
        add esp, 0x58
        ret 0xC
        UNREACHABLE_TRAP(0x6f85020)
    }
}

#undef public_6f85048
#undef public_6f85050
#undef public_6f85061
#undef public_6f8506f
#undef public_6f85090
#undef public_6f8509f
#undef public_6f850ee
#undef public_6f85148
#undef public_6f8514d
#undef public_6f8515e
#undef public_6f851dd
#undef public_6f85220
#undef public_6f8522f
#undef public_6f85244
#undef public_6f85253
#undef public_6f85260
#undef public_6f8526d
#undef public_6f85273
#undef public_6f852a1
