#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db20de);

#define public_6da852f _public_6da852f
#define public_6da8556 _public_6da8556
#define public_6da8580 _public_6da8580
#define public_6da85ac _public_6da85ac
#define public_6da85da _public_6da85da
#define public_6da8606 _public_6da8606
#define public_6da8634 _public_6da8634
#define public_6da8660 _public_6da8660
#define public_6da86ef _public_6da86ef
#define public_6da8702 _public_6da8702
#define public_6da871e _public_6da871e
#define public_6da8731 _public_6da8731
#define public_6da874d _public_6da874d
#define public_6da8760 _public_6da8760
#define public_6da877c _public_6da877c
#define public_6da878f _public_6da878f
#define public_6da87b8 _public_6da87b8
#define public_6da87eb _public_6da87eb
#define public_6da87f7 _public_6da87f7

PROC_DECLARE(0x6da84e0, internal_6da84e0, public_6da84e0);
extern "C" NAKED register_t __cdecl internal_6da84e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebp, ds:[edi+0x18]
        push ebp
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da852f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da852f : nop
        mov ecx, dword ptr ds : [edi+0x24]
        push ecx
        call dword ptr ds : [public_6db3108]
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        mov edx, eax
        mov eax, dword ptr ds : [esi]
        add eax, 2
        mov ecx, eax
        cmp ecx, ebx
        mov dword ptr ds : [esi], eax
        mov eax, 0x16
        jbe public_6da8556
        mov dword ptr ds : [esi+0xC], eax
        public_6da8556 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da87f7
        mov ecx, dword ptr ss : [ebp]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da8580
        mov dword ptr ds : [esi+0xC], eax
        public_6da8580 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da87f7
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 2
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da85ac
        mov dword ptr ds : [esi+0xC], eax
        public_6da85ac : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da87f7
        mov ecx, dword ptr ss : [ebp]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da85da
        mov dword ptr ds : [esi+0xC], eax
        public_6da85da : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da87f7
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 2
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da8606
        mov dword ptr ds : [esi+0xC], eax
        public_6da8606 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da87f7
        mov ecx, dword ptr ss : [ebp]
        mov dx, word ptr ds : [edi+0x34]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da8634
        mov dword ptr ds : [esi+0xC], eax
        public_6da8634 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da87f7
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x38]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 0xC
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da8660
        mov dword ptr ds : [esi+0xC], eax
        public_6da8660 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da87f7
        mov eax, dword ptr ds : [edi+0x3C]
        mov ecx, dword ptr ds : [edi+0x40]
        mov ebx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x44]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], edx
        call public_6d8f510
        fld dword ptr ds : [edi+0x4C]
        fmul qword ptr ds : [public_6db3fd8]
        add ebx, 0xC
        mov dword ptr ss : [ebp], ebx
        call public_6db20de
        fld dword ptr ds : [edi+0x50]
        fmul qword ptr ds : [public_6db3fd8]
        mov byte ptr ss : [esp+0x28], al
        call public_6db20de
        fld dword ptr ds : [edi+0x54]
        fmul qword ptr ds : [public_6db3fd8]
        mov byte ptr ss : [esp+0x24], al
        call public_6db20de
        fld dword ptr ds : [edi+0x48]
        fmul qword ptr ds : [public_6db3fd8]
        mov byte ptr ss : [esp+0x13], al
        call public_6db20de
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        mov ebx, 0x16
        jbe public_6da86ef
        mov dword ptr ds : [esi+0xC], ebx
        public_6da86ef : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6da8702
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da8702 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6da871e
        mov dword ptr ds : [esi+0xC], ebx
        public_6da871e : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6da8731
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da8731 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6da874d
        mov dword ptr ds : [esi+0xC], ebx
        public_6da874d : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6da8760
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da8760 : nop
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6da877c
        mov dword ptr ds : [esi+0xC], ebx
        public_6da877c : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6da878f
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da878f : nop
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], al
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        inc ecx
        push eax
        mov dword ptr ss : [ebp], ecx
        push ebp
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da87b8
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da87b8 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
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
        jbe public_6da87eb
        mov dword ptr ds : [ecx+0x10], esi
        public_6da87eb : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6da87f7 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6da84e0)
    }
}

#undef public_6da852f
#undef public_6da8556
#undef public_6da8580
#undef public_6da85ac
#undef public_6da85da
#undef public_6da8606
#undef public_6da8634
#undef public_6da8660
#undef public_6da86ef
#undef public_6da8702
#undef public_6da871e
#undef public_6da8731
#undef public_6da874d
#undef public_6da8760
#undef public_6da877c
#undef public_6da878f
#undef public_6da87b8
#undef public_6da87eb
#undef public_6da87f7
