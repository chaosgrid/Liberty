#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42bc70);

#define public_42bc90 _public_42bc90
#define public_42bcb5 _public_42bcb5
#define public_42bcb9 _public_42bcb9
#define public_42bcbe _public_42bcbe
#define public_42bd90 _public_42bd90
#define public_42bdbd _public_42bdbd
#define public_42bdd0 _public_42bdd0
#define public_42bdda _public_42bdda
#define public_42bea0 _public_42bea0
#define public_42bec7 _public_42bec7
#define public_42bed1 _public_42bed1

PROC_DECLARE(0x42bc70, internal_42bc70, public_42bc70);
extern "C" NAKED register_t __cdecl internal_42bc70()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, ecx
        jne public_42bdbd
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [esi+8]
        lea esp, ss:[esp]
        public_42bc90 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ss : [ebp]
        mov cl, dl
        cmp dl, bl
        jne public_42bcb9
        test cl, cl
        je public_42bcb5
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ss : [ebp+1]
        mov cl, dl
        cmp dl, bl
        jne public_42bcb9
        add eax, 2
        add ebp, 2
        test cl, cl
        jne public_42bc90
        public_42bcb5 : nop
        xor eax, eax
        jmp public_42bcbe
        public_42bcb9 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_42bcbe : nop
        test eax, eax
        jne public_42bdbd
        mov eax, dword ptr ds : [edi+4]
        mov ebx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov dl, byte ptr ds : [edi+0x18]
        mov byte ptr ds : [esi+0x18], dl
        mov al, byte ptr ds : [edi+0x19]
        mov byte ptr ds : [esi+0x19], al
        mov eax, dword ptr ds : [esi+0x18]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x1A]
        and eax, 0xFFF0FFFF
        and ecx, 0xF
        shl ecx, 0x10
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [edi+0x18]
        xor eax, ecx
        and eax, 0xF00000
        xor eax, ecx
        mov dword ptr ds : [esi+0x18], eax
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x1B]
        and eax, 0xFEFFFFFF
        and ecx, 1
        shl ecx, 0x18
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [edi+0x18]
        xor eax, ecx
        and eax, 0x2000000
        xor eax, ecx
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x18]
        xor ecx, eax
        and ecx, 0x4000000
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [edi+0x18]
        xor eax, ecx
        and eax, 0x8000000
        xor eax, ecx
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x18]
        xor ecx, eax
        and ecx, 0x10000000
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x18]
        xor edx, ecx
        and edx, 0x20000000
        xor edx, ecx
        mov ecx, edi
        mov dword ptr ds : [esi+0x18], edx
        lea eax, ds:[esi+0x1C]
        sub ecx, esi
        mov edx, 2
        lea esp, ss:[esp]
        public_42bd90 : nop
        mov ebp, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], ebp
        add eax, 4
        dec edx
        jne public_42bd90
        mov eax, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], eax
        mov cx, word ptr ds : [edi+0x28]
        mov word ptr ds : [esi+0x28], cx
        mov dx, word ptr ds : [edi+0x2A]
        pop edi
        mov dword ptr ds : [esi+0xC], ebx
        mov word ptr ds : [esi+0x2A], dx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        public_42bdbd : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov ebp, eax
        test ebp, ebp
        jle public_42bdda
        mov ebx, ebp
        lea esp, ss:[esp]
        public_42bdd0 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        dec ebx
        jne public_42bdd0
        public_42bdda : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], ecx
        mov dl, byte ptr ds : [edi+0x18]
        mov byte ptr ds : [esi+0x18], dl
        mov al, byte ptr ds : [edi+0x19]
        mov byte ptr ds : [esi+0x19], al
        mov eax, dword ptr ds : [esi+0x18]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x1A]
        and eax, 0xFFF0FFFF
        and ecx, 0xF
        shl ecx, 0x10
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [edi+0x18]
        xor eax, ecx
        and eax, 0xF00000
        xor eax, ecx
        mov dword ptr ds : [esi+0x18], eax
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x1B]
        and eax, 0xFEFFFFFF
        and ecx, 1
        shl ecx, 0x18
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [edi+0x18]
        xor eax, ecx
        and eax, 0x2000000
        xor eax, ecx
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x18]
        xor ecx, eax
        and ecx, 0x4000000
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [edi+0x18]
        xor eax, ecx
        and eax, 0x8000000
        xor eax, ecx
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [edi+0x18]
        xor ecx, eax
        and ecx, 0x10000000
        xor ecx, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x18]
        xor edx, ecx
        and edx, 0x20000000
        xor edx, ecx
        mov ecx, edi
        mov dword ptr ds : [esi+0x18], edx
        lea eax, ds:[esi+0x1C]
        sub ecx, esi
        mov edx, 2
        lea ebx, ds:[ebx]
        public_42bea0 : nop
        mov ebx, dword ptr ds : [eax+ecx]
        mov dword ptr ds : [eax], ebx
        add eax, 4
        dec edx
        jne public_42bea0
        test ebp, ebp
        mov eax, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [esi+0x24], eax
        mov cx, word ptr ds : [edi+0x28]
        mov word ptr ds : [esi+0x28], cx
        mov dx, word ptr ds : [edi+0x2A]
        mov word ptr ds : [esi+0x2A], dx
        jle public_42bed1
        mov edi, ebp
        public_42bec7 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        dec edi
        jne public_42bec7
        public_42bed1 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x42bc70)
    }
}

#undef public_42bc90
#undef public_42bcb5
#undef public_42bcb9
#undef public_42bcbe
#undef public_42bd90
#undef public_42bdbd
#undef public_42bdd0
#undef public_42bdda
#undef public_42bea0
#undef public_42bec7
#undef public_42bed1
