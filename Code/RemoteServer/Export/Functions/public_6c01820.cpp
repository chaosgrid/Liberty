#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c0186f _public_6c0186f
#define public_6c01887 _public_6c01887
#define public_6c018b1 _public_6c018b1
#define public_6c018db _public_6c018db
#define public_6c01905 _public_6c01905
#define public_6c01931 _public_6c01931
#define public_6c01987 _public_6c01987
#define public_6c019ba _public_6c019ba
#define public_6c019c6 _public_6c019c6

PROC_DECLARE(0x6c01820, internal_6c01820, public_6c01820);
extern "C" NAKED register_t __cdecl internal_6c01820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
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
        je public_6c0186f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6c0186f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov eax, 0x16
        jbe public_6c01887
        mov dword ptr ds : [esi+0xC], eax
        public_6c01887 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6c019c6
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6c018b1
        mov dword ptr ds : [esi+0xC], eax
        public_6c018b1 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6c019c6
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6c018db
        mov dword ptr ds : [esi+0xC], eax
        public_6c018db : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6c019c6
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 2
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6c01905
        mov dword ptr ds : [esi+0xC], eax
        public_6c01905 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6c019c6
        mov ecx, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6c01931
        mov dword ptr ds : [esi+0xC], eax
        public_6c01931 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6c019c6
        mov eax, dword ptr ds : [edi+0x30]
        mov ecx, dword ptr ds : [edi+0x34]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6bda4c0
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add ebp, 0xC
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c01987
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6c01987 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], edx
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
        jbe public_6c019ba
        mov dword ptr ds : [ecx+0x10], esi
        public_6c019ba : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6c019c6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6c01820)
    }
}

#undef public_6c0186f
#undef public_6c01887
#undef public_6c018b1
#undef public_6c018db
#undef public_6c01905
#undef public_6c01931
#undef public_6c01987
#undef public_6c019ba
#undef public_6c019c6
