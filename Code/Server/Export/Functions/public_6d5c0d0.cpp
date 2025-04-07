#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d5c0f0 _public_6d5c0f0
#define public_6d5c11c _public_6d5c11c
#define public_6d5c121 _public_6d5c121
#define public_6d5c132 _public_6d5c132
#define public_6d5c1b4 _public_6d5c1b4
#define public_6d5c1f1 _public_6d5c1f1
#define public_6d5c1fe _public_6d5c1fe
#define public_6d5c213 _public_6d5c213
#define public_6d5c222 _public_6d5c222
#define public_6d5c230 _public_6d5c230
#define public_6d5c23c _public_6d5c23c
#define public_6d5c240 _public_6d5c240
#define public_6d5c253 _public_6d5c253
#define public_6d5c25e _public_6d5c25e
#define public_6d5c264 _public_6d5c264
#define public_6d5c270 _public_6d5c270
#define public_6d5c280 _public_6d5c280
#define public_6d5c289 _public_6d5c289
#define public_6d5c28d _public_6d5c28d
#define public_6d5c29d _public_6d5c29d

PROC_DECLARE(0x6d5c0d0, internal_6d5c0d0, public_6d5c0d0);
extern "C" NAKED register_t __cdecl internal_6d5c0d0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xC]
        push ebp
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], ebp
        je public_6d5c29d
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        public_6d5c0f0 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        lea ebx, ss:[ebp+0xC]
        mov edi, eax
        jae public_6d5c1b4
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d5c11c
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        mov ebx, eax
        ja public_6d5c121
        public_6d5c11c : nop
        mov ebx, 1
        public_6d5c121 : nop
        mov ecx, esi
        call public_6d31890
        add eax, ebx
        mov dword ptr ss : [esp+0x1C], eax
        jns public_6d5c132
        xor eax, eax
        public_6d5c132 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6d60012
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_6d23e40
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, eax
        lea eax, ds:[ecx+0xC]
        push eax
        push 1
        push ebp
        mov ecx, esi
        call public_6d3f0f0
        mov edx, dword ptr ds : [esi+8]
        add ebp, 4
        push ebp
        push edx
        push edi
        mov ecx, esi
        call public_6d23e40
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6d28880
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ebx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6d31890
        mov ebp, dword ptr ss : [esp+0x10]
        lea edx, ds:[ebx+eax*4+4]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], ebx
        jmp public_6d5c240
        public_6d5c1b4 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6d5c1fe
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6d23e40
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6d3f0f0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6d5c23c
        public_6d5c1f1 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d5c1f1
        jmp public_6d5c23c
        public_6d5c1fe : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6d5c222
        public_6d5c213 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6d5c213
        public_6d5c222 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_6d5c23c
        nop 
        lea esp, ss:[esp]
        public_6d5c230 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d5c230
        public_6d5c23c : nop
        add dword ptr ds : [esi+8], 4
        public_6d5c240 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov al, byte ptr ds : [ecx+0x11]
        test al, al
        jne public_6d5c264
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x11]
        test dl, dl
        jne public_6d5c25e
        public_6d5c253 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x11]
        test dl, dl
        je public_6d5c253
        public_6d5c25e : nop
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_6d5c289
        public_6d5c264 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp ebp, dword ptr ds : [eax+8]
        jne public_6d5c280
        lea esp, ss:[esp]
        public_6d5c270 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d5c270
        mov ebp, ecx
        public_6d5c280 : nop
        cmp dword ptr ss : [ebp+8], eax
        je public_6d5c28d
        mov dword ptr ss : [esp+0x10], eax
        public_6d5c289 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d5c28d : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp ebp, dword ptr ds : [eax+0xC]
        jne public_6d5c0f0
        pop edi
        pop esi
        pop ebx
        public_6d5c29d : nop
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d5c0d0)
    }
}

#undef public_6d5c0f0
#undef public_6d5c11c
#undef public_6d5c121
#undef public_6d5c132
#undef public_6d5c1b4
#undef public_6d5c1f1
#undef public_6d5c1fe
#undef public_6d5c213
#undef public_6d5c222
#undef public_6d5c230
#undef public_6d5c23c
#undef public_6d5c240
#undef public_6d5c253
#undef public_6d5c25e
#undef public_6d5c264
#undef public_6d5c270
#undef public_6d5c280
#undef public_6d5c289
#undef public_6d5c28d
#undef public_6d5c29d
