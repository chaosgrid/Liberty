#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d120b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15720);
CLANG_FORWARD_PROC_SYMBOL(public_6d16120);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61b2b);

#define public_6d12118 _public_6d12118
#define public_6d12146 _public_6d12146
#define public_6d1215b _public_6d1215b
#define public_6d12166 _public_6d12166
#define public_6d12188 _public_6d12188
#define public_6d1218b _public_6d1218b
#define public_6d1218f _public_6d1218f
#define public_6d121a8 _public_6d121a8
#define public_6d121b0 _public_6d121b0
#define public_6d121bd _public_6d121bd
#define public_6d121bf _public_6d121bf
#define public_6d121f3 _public_6d121f3
#define public_6d121f7 _public_6d121f7
#define public_6d12221 _public_6d12221
#define public_6d1222f _public_6d1222f
#define public_6d12249 _public_6d12249
#define public_6d1224c _public_6d1224c
#define public_6d12270 _public_6d12270
#define public_6d12288 _public_6d12288
#define public_6d12290 _public_6d12290
#define public_6d122a7 _public_6d122a7

PROC_DECLARE(0x6d120b0, internal_6d120b0, public_6d120b0);
extern "C" NAKED register_t __cdecl internal_6d120b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61b2b @0x6d120b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61b2b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov dword ptr ss : [esp+0xC], ecx
        push edi
        mov ecx, offset public_6d8e328
        call public_6d15720
        mov ebx, eax
        push 0x70
        mov dword ptr ss : [esp+0x18], ebx
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x24], ebp
        je public_6d12118
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_6d68384
        mov dword ptr ds : [esi+4], ebp
        mov byte ptr ds : [esi+8], 0
        call dword ptr ds : [public_6d64758]
        mov dword ptr ds : [esi], offset public_6d68374
        mov ebp, esi
        public_6d12118 : nop
        mov edi, dword ptr ss : [esp+0x2C]
        lea esi, ss:[ebp+0xC]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call dword ptr ds : [public_6d6475c]
        mov dword ptr ds : [esi], ebx
        mov edi, dword ptr ds : [edi+0x18]
        or ebx, 0xFFFFFFFF
        test edi, edi
        je public_6d121f3
        mov dword ptr ss : [esp+0x2C], ebx
        xor esi, esi
        public_6d12146 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+0x178]
        test edx, edx
        jne public_6d1215b
        xor eax, eax
        jmp public_6d12166
        public_6d1215b : nop
        mov eax, dword ptr ds : [ecx+0x17C]
        sub eax, edx
        sar eax, 2
        public_6d12166 : nop
        cmp esi, eax
        jge public_6d1218b
        mov eax, dword ptr ds : [ecx+0x178]
        mov eax, dword ptr ds : [eax+esi*4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_6d12188
        push edi
        push eax
        call dword ptr ds : [public_6d64a48]
        add esp, 8
        test eax, eax
        je public_6d1218f
        public_6d12188 : nop
        inc esi
        jmp public_6d12146
        public_6d1218b : nop
        mov esi, dword ptr ss : [esp+0x2C]
        public_6d1218f : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ecx+0x178]
        mov eax, dword ptr ds : [edx+esi*4]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+0x38]
        mov dword ptr ss : [esp+0x2C], ecx
        xor edi, edi
        jmp public_6d121b0
        public_6d121a8 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        lea esp, ss:[esp]
        public_6d121b0 : nop
        test edi, edi
        mov edx, dword ptr ss : [esp+0x10]
        jne public_6d121bd
        mov edi, dword ptr ds : [edx+0x14]
        jmp public_6d121bf
        public_6d121bd : nop
        mov edi, dword ptr ds : [edi]
        public_6d121bf : nop
        test edi, edi
        je public_6d121f7
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6d121b0
        test ecx, ecx
        je public_6d121b0
        push ecx
        push eax
        call dword ptr ds : [public_6d64a48]
        add esp, 8
        test eax, eax
        jne public_6d121a8
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        mov esi, dword ptr ds : [esi+4]
        je public_6d121f3
        test esi, esi
        je public_6d121f3
        cmp esi, eax
        jne public_6d121a8
        public_6d121f3 : nop
        mov edx, dword ptr ss : [esp+0x10]
        public_6d121f7 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [ebp+0x28], 0
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+4], eax
        mov byte ptr ss : [ebp+8], 1
        mov al, byte ptr ds : [edx+0x1C]
        test al, al
        je public_6d12221
        mov eax, dword ptr ds : [edx+0x20]
        test eax, eax
        je public_6d12221
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+0x20], ecx
        jmp public_6d1222f
        public_6d12221 : nop
        push 0xC
        call public_6d60012
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        public_6d1222f : nop
        mov ecx, dword ptr ds : [edx+0x18]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], ebp
        mov ecx, dword ptr ds : [edx+0x18]
        test ecx, ecx
        je public_6d12249
        mov dword ptr ds : [ecx], eax
        jmp public_6d1224c
        public_6d12249 : nop
        mov dword ptr ds : [edx+0x14], eax
        public_6d1224c : nop
        mov dword ptr ds : [edx+0x18], eax
        mov ecx, dword ptr ds : [edx+0xC]
        push 1
        lea eax, ss:[esp+0x34]
        push eax
        mov dword ptr ss : [esp+0x38], 0
        call public_6d16120
        test al, al
        je public_6d122a7
        lea ebx, ds:[ebx]
        public_6d12270 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov ecx, dword ptr ss : [ebp+4]
        je public_6d12288
        test ecx, ecx
        je public_6d12288
        cmp ecx, eax
        jne public_6d12290
        public_6d12288 : nop
        mov edx, dword ptr ss : [ebp]
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx]
        public_6d12290 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+0xC]
        push 1
        lea eax, ss:[esp+0x34]
        push eax
        call public_6d16120
        test al, al
        jne public_6d12270
        public_6d122a7 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov byte ptr ss : [ebp+8], 0
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6d120b0)
    }
}

#undef public_6d12118
#undef public_6d12146
#undef public_6d1215b
#undef public_6d12166
#undef public_6d12188
#undef public_6d1218b
#undef public_6d1218f
#undef public_6d121a8
#undef public_6d121b0
#undef public_6d121bd
#undef public_6d121bf
#undef public_6d121f3
#undef public_6d121f7
#undef public_6d12221
#undef public_6d1222f
#undef public_6d12249
#undef public_6d1224c
#undef public_6d12270
#undef public_6d12288
#undef public_6d12290
#undef public_6d122a7
