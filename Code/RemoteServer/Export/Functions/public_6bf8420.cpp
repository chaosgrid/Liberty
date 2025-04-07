#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf8469 _public_6bf8469
#define public_6bf8481 _public_6bf8481
#define public_6bf8491 _public_6bf8491
#define public_6bf84b0 _public_6bf84b0
#define public_6bf84c0 _public_6bf84c0
#define public_6bf84df _public_6bf84df
#define public_6bf84ef _public_6bf84ef
#define public_6bf850e _public_6bf850e
#define public_6bf851e _public_6bf851e
#define public_6bf853f _public_6bf853f
#define public_6bf854f _public_6bf854f
#define public_6bf856e _public_6bf856e
#define public_6bf857e _public_6bf857e
#define public_6bf859c _public_6bf859c
#define public_6bf85ac _public_6bf85ac
#define public_6bf85d3 _public_6bf85d3
#define public_6bf8604 _public_6bf8604

PROC_DECLARE(0x6bf8420, internal_6bf8420, public_6bf8420);
extern "C" NAKED register_t __cdecl internal_6bf8420()
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
        je public_6bf8469
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf8469 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6bf8481
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf8481 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf8491
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf8491 : nop
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
        jbe public_6bf84b0
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf84b0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf84c0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf84c0 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf84df
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf84df : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf84ef
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf84ef : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf850e
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf850e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf851e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf851e : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf853f
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf853f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf854f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf854f : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x30]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf856e
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf856e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf857e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf857e : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x34]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf859c
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf859c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf85ac
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf85ac : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x38]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf85d3
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf85d3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6bf8604
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf8604 : nop
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
        UNREACHABLE_TRAP(0x6bf8420)
    }
}

#undef public_6bf8469
#undef public_6bf8481
#undef public_6bf8491
#undef public_6bf84b0
#undef public_6bf84c0
#undef public_6bf84df
#undef public_6bf84ef
#undef public_6bf850e
#undef public_6bf851e
#undef public_6bf853f
#undef public_6bf854f
#undef public_6bf856e
#undef public_6bf857e
#undef public_6bf859c
#undef public_6bf85ac
#undef public_6bf85d3
#undef public_6bf8604
