#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1c30);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62be920);
CLANG_FORWARD_PROC_SYMBOL(public_62be950);
CLANG_FORWARD_PROC_SYMBOL(public_62bea50);
CLANG_FORWARD_PROC_SYMBOL(public_62bee20);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);

#define public_62bd179 _public_62bd179
#define public_62bd180 _public_62bd180
#define public_62bd1a5 _public_62bd1a5
#define public_62bd1b7 _public_62bd1b7
#define public_62bd1e1 _public_62bd1e1
#define public_62bd20a _public_62bd20a
#define public_62bd210 _public_62bd210
#define public_62bd22d _public_62bd22d
#define public_62bd233 _public_62bd233
#define public_62bd272 _public_62bd272

PROC_DECLARE(0x62bd100, internal_62bd100, public_62bd100);
extern "C" NAKED register_t __cdecl internal_62bd100()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], edx
        mov al, byte ptr ds : [edi+0xC]
        lea ebp, ds:[edi+0x10]
        lea esi, ds:[ecx+0x10]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x10], ecx
        mov byte ptr ds : [ecx+0xC], al
        je public_62bd1b7
        mov ebx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x24], eax
        je public_62bd179
        mov ecx, eax
        cmp eax, ecx
        jne public_62bd179
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        mov ecx, esi
        call public_62bea50
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_632c410
        jmp public_62bd1a5
        public_62bd179 : nop
        cmp eax, ebx
        je public_62bd1a5
        lea ecx, ds:[ecx]
        public_62bd180 : nop
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_62a1c30
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_62be400
        cmp dword ptr ss : [esp+0x24], ebx
        jne public_62bd180
        public_62bd1a5 : nop
        mov dl, byte ptr ss : [ebp+1]
        push ebp
        mov ecx, esi
        mov byte ptr ds : [esi+1], dl
        call public_62be950
        mov ecx, dword ptr ss : [esp+0x10]
        public_62bd1b7 : nop
        mov al, byte ptr ds : [edi+0x24]
        lea edx, ds:[edi+0x28]
        lea ebp, ds:[ecx+0x28]
        cmp ebp, edx
        mov byte ptr ds : [ecx+0x24], al
        je public_62bd272
        mov ebx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebx
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x24], edx
        je public_62bd20a
        public_62bd1e1 : nop
        cmp edx, edi
        je public_62bd20a
        lea esi, ds:[edx+8]
        lea edi, ds:[eax+8]
        mov eax, dword ptr ds : [eax]
        cmp eax, ebx
        mov ecx, 5
        rep movsd
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], edx
        jne public_62bd1e1
        public_62bd20a : nop
        cmp eax, ebx
        mov esi, eax
        je public_62bd22d
        public_62bd210 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        call public_6271cc0
        cmp esi, ebx
        jne public_62bd210
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_62bd22d : nop
        cmp edx, edi
        mov esi, edx
        je public_62bd272
        public_62bd233 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        push ebx
        mov ecx, ebp
        call public_62be920
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_62bee20
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 8
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62bd233
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        public_62bd272 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62bd100)
    }
}

#undef public_62bd179
#undef public_62bd180
#undef public_62bd1a5
#undef public_62bd1b7
#undef public_62bd1e1
#undef public_62bd20a
#undef public_62bd210
#undef public_62bd22d
#undef public_62bd233
#undef public_62bd272
