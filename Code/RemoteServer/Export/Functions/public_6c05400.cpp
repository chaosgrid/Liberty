#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c05447 _public_6c05447
#define public_6c0545e _public_6c0545e
#define public_6c05470 _public_6c05470
#define public_6c05493 _public_6c05493
#define public_6c054a5 _public_6c054a5
#define public_6c054d0 _public_6c054d0
#define public_6c05503 _public_6c05503

PROC_DECLARE(0x6c05400, internal_6c05400, public_6c05400);
extern "C" NAKED register_t __cdecl internal_6c05400()
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
        je public_6c05447
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c05447 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c0545e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c0545e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c05470
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c05470 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c05493
        mov dword ptr ds : [esi+0xC], 0x16
        public_6c05493 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c054a5
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c054a5 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c054d0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c054d0 : nop
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
        jbe public_6c05503
        mov dword ptr ds : [ecx+0x10], esi
        public_6c05503 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c05400)
    }
}

#undef public_6c05447
#undef public_6c0545e
#undef public_6c05470
#undef public_6c05493
#undef public_6c054a5
#undef public_6c054d0
#undef public_6c05503
