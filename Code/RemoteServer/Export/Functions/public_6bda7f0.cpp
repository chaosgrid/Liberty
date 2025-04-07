#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6becfb0);

#define public_6bda839 _public_6bda839
#define public_6bda850 _public_6bda850
#define public_6bda863 _public_6bda863
#define public_6bda884 _public_6bda884
#define public_6bda897 _public_6bda897
#define public_6bda8db _public_6bda8db
#define public_6bda90b _public_6bda90b
#define public_6bda917 _public_6bda917

PROC_DECLARE(0x6bda7f0, internal_6bda7f0, public_6bda7f0);
extern "C" NAKED register_t __cdecl internal_6bda7f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bda839
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bda839 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bda850
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bda850 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bda863
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bda863 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bda884
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bda884 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bda897
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bda897 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x24]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        push eax
        push ecx
        mov ecx, edi
        call public_6becfb0
        test eax, eax
        jne public_6bda917
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        push ebx
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bda8db
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bda8db : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6bda90b
        mov dword ptr ds : [ecx+0x10], esi
        public_6bda90b : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6bda917 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bda7f0)
    }
}

#undef public_6bda839
#undef public_6bda850
#undef public_6bda863
#undef public_6bda884
#undef public_6bda897
#undef public_6bda8db
#undef public_6bda90b
#undef public_6bda917
