#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c03437 _public_6c03437
#define public_6c0344e _public_6c0344e
#define public_6c03460 _public_6c03460
#define public_6c03481 _public_6c03481
#define public_6c03493 _public_6c03493
#define public_6c034bc _public_6c034bc
#define public_6c034ef _public_6c034ef

PROC_DECLARE(0x6c033f0, internal_6c033f0, public_6c033f0);
extern "C" NAKED register_t __cdecl internal_6c033f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
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
        je public_6c03437
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c03437 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c0344e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c0344e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c03460
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c03460 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c03481
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c03481 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c03493
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c03493 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c034bc
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c034bc : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov edi, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6c034ef
        mov dword ptr ds : [ecx+0x10], esi
        public_6c034ef : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c033f0)
    }
}

#undef public_6c03437
#undef public_6c0344e
#undef public_6c03460
#undef public_6c03481
#undef public_6c03493
#undef public_6c034bc
#undef public_6c034ef
