#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c00ae9 _public_6c00ae9
#define public_6c00b01 _public_6c00b01
#define public_6c00b11 _public_6c00b11
#define public_6c00b30 _public_6c00b30
#define public_6c00b40 _public_6c00b40
#define public_6c00b59 _public_6c00b59
#define public_6c00b61 _public_6c00b61
#define public_6c00b72 _public_6c00b72
#define public_6c00b82 _public_6c00b82
#define public_6c00b94 _public_6c00b94
#define public_6c00ba5 _public_6c00ba5
#define public_6c00bc1 _public_6c00bc1
#define public_6c00bd5 _public_6c00bd5
#define public_6c00bde _public_6c00bde
#define public_6c00c11 _public_6c00c11

PROC_DECLARE(0x6c00aa0, internal_6c00aa0, public_6c00aa0);
extern "C" NAKED register_t __cdecl internal_6c00aa0()
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
        je public_6c00ae9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6c00ae9 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6c00b01
        mov dword ptr ds : [esi+0xC], ebp
        public_6c00b01 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c00b11
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c00b11 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6c00b30
        mov dword ptr ds : [esi+0xC], ebp
        public_6c00b30 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6c00b40
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c00b40 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x24]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        test ecx, ecx
        jne public_6c00b59
        xor eax, eax
        jmp public_6c00b61
        public_6c00b59 : nop
        mov eax, dword ptr ds : [edi+0x30]
        sub eax, ecx
        sar eax, 2
        public_6c00b61 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 2
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6c00b72
        mov dword ptr ds : [esi+0xC], ebp
        public_6c00b72 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6c00b82
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c00b82 : nop
        mov ecx, dword ptr ds : [ebx]
        mov word ptr ds : [ecx], ax
        mov eax, dword ptr ds : [edi+0x2C]
        add ecx, 2
        mov dword ptr ds : [ebx], ecx
        cmp eax, dword ptr ds : [edi+0x30]
        je public_6c00bc1
        public_6c00b94 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6c00ba5
        mov dword ptr ds : [esi+0xC], ebp
        public_6c00ba5 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6c00bd5
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ds : [edi+0x30]
        add eax, 4
        cmp eax, ecx
        jne public_6c00b94
        public_6c00bc1 : nop
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c00bde
        public_6c00bd5 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6c00bde : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
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
        jbe public_6c00c11
        mov dword ptr ds : [ecx+0x10], esi
        public_6c00c11 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c00aa0)
    }
}

#undef public_6c00ae9
#undef public_6c00b01
#undef public_6c00b11
#undef public_6c00b30
#undef public_6c00b40
#undef public_6c00b59
#undef public_6c00b61
#undef public_6c00b72
#undef public_6c00b82
#undef public_6c00b94
#undef public_6c00ba5
#undef public_6c00bc1
#undef public_6c00bd5
#undef public_6c00bde
#undef public_6c00c11
