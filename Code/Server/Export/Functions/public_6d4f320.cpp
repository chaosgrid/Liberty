#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f320);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d4f340 _public_6d4f340
#define public_6d4f367 _public_6d4f367
#define public_6d4f386 _public_6d4f386
#define public_6d4f39f _public_6d4f39f
#define public_6d4f3a5 _public_6d4f3a5
#define public_6d4f3bf _public_6d4f3bf
#define public_6d4f3c6 _public_6d4f3c6
#define public_6d4f3fc _public_6d4f3fc

PROC_DECLARE(0x6d4f320, internal_6d4f320, public_6d4f320);
extern "C" NAKED register_t __cdecl internal_6d4f320()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ds : [ecx+0x270]
        push esi
        lea esi, ds:[ecx+0x26C]
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov dword ptr ss : [esp+0xC], ecx
        je public_6d4f367
        lea esp, ss:[esp]
        public_6d4f340 : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6d5ffb0
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ecx
        jne public_6d4f340
        public_6d4f367 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp esi, ecx
        je public_6d4f3fc
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+4]
        push ebp
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6d4f39f
        public_6d4f386 : nop
        cmp ebp, ecx
        je public_6d4f39f
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov ebp, dword ptr ss : [ebp]
        jne public_6d4f386
        public_6d4f39f : nop
        cmp eax, edi
        mov ebx, eax
        je public_6d4f3bf
        public_6d4f3a5 : nop
        mov eax, ebx
        mov ebx, dword ptr ds : [ebx]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6d643d0]
        cmp ebx, edi
        jne public_6d4f3a5
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6d4f3bf : nop
        mov ebx, ebp
        cmp ebp, ecx
        pop ebp
        je public_6d4f3fc
        public_6d4f3c6 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d643cc]
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[ebx+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6d5c880
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6d4f3c6
        public_6d4f3fc : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [eax+0x348]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+0x5C]
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d4f320)
    }
}

#undef public_6d4f340
#undef public_6d4f367
#undef public_6d4f386
#undef public_6d4f39f
#undef public_6d4f3a5
#undef public_6d4f3bf
#undef public_6d4f3c6
#undef public_6d4f3fc
