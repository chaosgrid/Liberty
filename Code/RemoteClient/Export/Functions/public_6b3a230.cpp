#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a230);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a430);

#define public_6b3a269 _public_6b3a269
#define public_6b3a2a0 _public_6b3a2a0
#define public_6b3a2f2 _public_6b3a2f2
#define public_6b3a321 _public_6b3a321
#define public_6b3a342 _public_6b3a342
#define public_6b3a344 _public_6b3a344
#define public_6b3a34e _public_6b3a34e

PROC_DECLARE(0x6b3a230, internal_6b3a230, public_6b3a230);
extern "C" NAKED register_t __cdecl internal_6b3a230()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea ebx, ds:[esi+0x20]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6b6b0a8]
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x10], edx
        jbe public_6b3a269
        mov dword ptr ds : [esi+0x1C], 0x17
        public_6b3a269 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6b3a344
        mov eax, dword ptr ds : [esi+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        test cx, cx
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ss : [esp+0x10], ecx
        jbe public_6b3a342
        xor ebp, ebp
        test cx, cx
        jbe public_6b3a342
        lea ebx, ds:[ebx]
        public_6b3a2a0 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6b6b030]
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6b3a430
        mov edx, dword ptr ds : [ebx+8]
        add esp, 8
        inc edx
        mov dword ptr ds : [ebx+8], edx
        mov edx, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [esi+0x14]
        add edi, 2
        mov ecx, edi
        add eax, 8
        cmp ecx, edx
        mov dword ptr ds : [esi+0x10], edi
        jbe public_6b3a2f2
        mov dword ptr ds : [esi+0x1C], 0x17
        public_6b3a2f2 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b3a34e
        mov ecx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        add ecx, 2
        mov dword ptr ds : [esi+0x18], ecx
        mov edi, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0x14]
        add edi, 4
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [esi+0x10], edi
        jbe public_6b3a321
        mov dword ptr ds : [esi+0x1C], 0x17
        public_6b3a321 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b3a34e
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        inc ebp
        cmp bp, word ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [esi+0x18], ecx
        jb public_6b3a2a0
        public_6b3a342 : nop
        xor eax, eax
        public_6b3a344 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6b3a34e : nop
        mov eax, dword ptr ds : [esi+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6b3a230)
    }
}

#undef public_6b3a269
#undef public_6b3a2a0
#undef public_6b3a2f2
#undef public_6b3a321
#undef public_6b3a342
#undef public_6b3a344
#undef public_6b3a34e
