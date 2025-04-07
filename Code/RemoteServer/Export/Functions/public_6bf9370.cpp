#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09ee8);

#define public_6bf93c9 _public_6bf93c9
#define public_6bf93f3 _public_6bf93f3
#define public_6bf941d _public_6bf941d
#define public_6bf9445 _public_6bf9445
#define public_6bf9478 _public_6bf9478
#define public_6bf94a2 _public_6bf94a2
#define public_6bf94cb _public_6bf94cb
#define public_6bf94f0 _public_6bf94f0
#define public_6bf94ff _public_6bf94ff
#define public_6bf9526 _public_6bf9526
#define public_6bf9539 _public_6bf9539
#define public_6bf9561 _public_6bf9561
#define public_6bf9580 _public_6bf9580
#define public_6bf9591 _public_6bf9591
#define public_6bf95b5 _public_6bf95b5
#define public_6bf95ca _public_6bf95ca
#define public_6bf9608 _public_6bf9608
#define public_6bf961b _public_6bf961b
#define public_6bf9642 _public_6bf9642
#define public_6bf9673 _public_6bf9673
#define public_6bf967f _public_6bf967f

PROC_DECLARE(0x6bf9370, internal_6bf9370, public_6bf9370);
extern "C" NAKED register_t __cdecl internal_6bf9370()
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
        mov dword ptr ds : [edi+0x1C], eax
        test eax, eax
        mov eax, 0x16
        jne public_6bf967f
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf93c9
        mov dword ptr ds : [esi+0xC], eax
        public_6bf93c9 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
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
        jbe public_6bf93f3
        mov dword ptr ds : [esi+0xC], eax
        public_6bf93f3 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
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
        jbe public_6bf941d
        mov dword ptr ds : [esi+0xC], eax
        public_6bf941d : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebp
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf9445
        mov dword ptr ds : [esi+0xC], eax
        public_6bf9445 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
        mov ecx, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x74]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [ebx], ecx
        mov cl, byte ptr ds : [edi+0x74]
        test cl, cl
        je public_6bf9526
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf9478
        mov dword ptr ds : [esi+0xC], eax
        public_6bf9478 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf94a2
        mov dword ptr ds : [esi+0xC], eax
        public_6bf94a2 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [ecx], edx
        mov dl, byte ptr ds : [edi+0x5C]
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebp
        mov dword ptr ds : [esi], ecx
        jbe public_6bf94cb
        mov dword ptr ds : [esi+0xC], eax
        public_6bf94cb : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
        mov ecx, dword ptr ds : [ebx]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ds : [edi+0x5C]
        xor edx, edx
        test ecx, ecx
        jle public_6bf9526
        lea ebp, ds:[edi+0x3C]
        lea esp, ss:[esp]
        public_6bf94f0 : nop
        mov ecx, dword ptr ds : [esi]
        add ecx, 4
        cmp ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ecx
        jbe public_6bf94ff
        mov dword ptr ds : [esi+0xC], eax
        public_6bf94ff : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edi+0x5C]
        add ecx, 4
        inc edx
        add ebp, 4
        cmp edx, eax
        mov dword ptr ds : [ebx], ecx
        mov eax, 0x16
        jl public_6bf94f0
        public_6bf9526 : nop
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf9539
        mov dword ptr ds : [esi+0xC], eax
        public_6bf9539 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebp
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf9561
        mov dword ptr ds : [esi+0xC], eax
        public_6bf9561 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
        mov ecx, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x68]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ds : [ebx], ecx
        mov cl, byte ptr ds : [edi+0x68]
        xor edx, edx
        test cl, cl
        jle public_6bf95b5
        nop 
        public_6bf9580 : nop
        mov ecx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        add ecx, 4
        cmp ecx, ebp
        mov dword ptr ds : [esi], ecx
        jbe public_6bf9591
        mov dword ptr ds : [esi+0xC], eax
        public_6bf9591 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf967f
        mov ebp, dword ptr ds : [edi+0x64]
        mov ecx, dword ptr ds : [ebx]
        mov ebp, dword ptr ss : [ebp+edx*4]
        mov dword ptr ds : [ecx], ebp
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        movsx ecx, byte ptr ds : [edi+0x68]
        inc edx
        cmp edx, ecx
        jl public_6bf9580
        public_6bf95b5 : nop
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        mov cx, word ptr ds : [edi+0x6C]
        add edx, 2
        cmp edx, ebp
        mov dword ptr ds : [esi], edx
        jbe public_6bf95ca
        mov dword ptr ds : [esi+0xC], eax
        public_6bf95ca : nop
        mov edx, dword ptr ds : [edi+0x1C]
        test edx, edx
        jne public_6bf967f
        mov eax, dword ptr ds : [ebx]
        mov word ptr ds : [eax], cx
        fld dword ptr ds : [edi+0x70]
        fmul dword ptr ds : [public_6c0e278]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        fmul qword ptr ds : [public_6c0e270]
        call public_6c09ee8
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebp
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6bf9608
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf9608 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6bf961b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf961b : nop
        mov ecx, dword ptr ds : [ebx]
        mov byte ptr ds : [ecx], al
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        inc ecx
        push edx
        mov dword ptr ds : [ebx], ecx
        push ebx
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf9642
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf9642 : nop
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
        jbe public_6bf9673
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf9673 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6bf967f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bf9370)
    }
}

#undef public_6bf93c9
#undef public_6bf93f3
#undef public_6bf941d
#undef public_6bf9445
#undef public_6bf9478
#undef public_6bf94a2
#undef public_6bf94cb
#undef public_6bf94f0
#undef public_6bf94ff
#undef public_6bf9526
#undef public_6bf9539
#undef public_6bf9561
#undef public_6bf9580
#undef public_6bf9591
#undef public_6bf95b5
#undef public_6bf95ca
#undef public_6bf9608
#undef public_6bf961b
#undef public_6bf9642
#undef public_6bf9673
#undef public_6bf967f
