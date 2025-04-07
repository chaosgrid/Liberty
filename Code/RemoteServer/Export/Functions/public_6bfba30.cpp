#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfba79 _public_6bfba79
#define public_6bfba91 _public_6bfba91
#define public_6bfbaa1 _public_6bfbaa1
#define public_6bfbac0 _public_6bfbac0
#define public_6bfbad0 _public_6bfbad0
#define public_6bfbaef _public_6bfbaef
#define public_6bfbaff _public_6bfbaff
#define public_6bfbb1e _public_6bfbb1e
#define public_6bfbb2e _public_6bfbb2e
#define public_6bfbb4b _public_6bfbb4b
#define public_6bfbb5b _public_6bfbb5b
#define public_6bfbb78 _public_6bfbb78
#define public_6bfbb88 _public_6bfbb88
#define public_6bfbbb1 _public_6bfbbb1
#define public_6bfbbe2 _public_6bfbbe2

PROC_DECLARE(0x6bfba30, internal_6bfba30, public_6bfba30);
extern "C" NAKED register_t __cdecl internal_6bfba30()
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
        je public_6bfba79
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bfba79 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6bfba91
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfba91 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfbaa1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfbaa1 : nop
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
        jbe public_6bfbac0
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfbac0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfbad0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfbad0 : nop
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
        jbe public_6bfbaef
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfbaef : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfbaff
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfbaff : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfbb1e
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfbb1e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfbb2e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfbb2e : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfbb4b
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfbb4b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfbb5b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfbb5b : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x30]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bfbb78
        mov dword ptr ds : [esi+0xC], ebp
        public_6bfbb78 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bfbb88
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfbb88 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x34]
        fstp dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfbbb1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bfbbb1 : nop
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
        jbe public_6bfbbe2
        mov dword ptr ds : [ecx+0x10], esi
        public_6bfbbe2 : nop
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
        UNREACHABLE_TRAP(0x6bfba30)
    }
}

#undef public_6bfba79
#undef public_6bfba91
#undef public_6bfbaa1
#undef public_6bfbac0
#undef public_6bfbad0
#undef public_6bfbaef
#undef public_6bfbaff
#undef public_6bfbb1e
#undef public_6bfbb2e
#undef public_6bfbb4b
#undef public_6bfbb5b
#undef public_6bfbb78
#undef public_6bfbb88
#undef public_6bfbbb1
#undef public_6bfbbe2
