#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63440d0);
CLANG_FORWARD_PROC_SYMBOL(public_6354d70);
CLANG_FORWARD_PROC_SYMBOL(public_6354dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6355050);
CLANG_FORWARD_PROC_SYMBOL(public_6355370);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_6355090 _public_6355090
#define public_6355096 _public_6355096
#define public_63550cf _public_63550cf
#define public_63550ea _public_63550ea
#define public_6355108 _public_6355108
#define public_635511c _public_635511c
#define public_6355168 _public_6355168
#define public_635517a _public_635517a
#define public_635519b _public_635519b
#define public_63551a5 _public_63551a5
#define public_63551b6 _public_63551b6

PROC_DECLARE(0x6355050, internal_6355050, public_6355050);
extern "C" NAKED register_t __cdecl internal_6355050()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push edi
        mov ecx, esi
        call public_6355370
        mov ecx, dword ptr ss : [ebp+0xC]
        mov ebx, eax
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ds:[ebx*4]
        mov edi, eax
        lea eax, ds:[eax+edx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [ebp-8], ebx
        jb public_6355090
        push edx
        call public_63440d0
        mov edi, eax
        mov dword ptr ss : [ebp+0xC], edi
        jmp public_6355096
        public_6355090 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ss : [ebp+0xC], edi
        public_6355096 : nop
        fild dword ptr ss : [ebp-8]
        mov eax, ebx
        shl eax, 4
        add eax, 3
        fadd dword ptr ds : [public_63a53d8]
        and eax, 0xFFFFFFFC
        fdivr dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [ebp-0x18]
        call public_6391dc0
        xor eax, eax
        mov ax, word ptr ds : [esi+2]
        mov ecx, esp
        mov dword ptr ss : [ebp-0x14], ecx
        dec eax
        js public_63550ea
        mov edx, eax
        shl edx, 4
        lea ecx, ds:[edx+ecx+8]
        public_63550cf : nop
        mov edx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edx+eax*4]
        mov dword ptr ds : [edi+eax*4], edx
        xor edx, edx
        mov dword ptr ds : [ecx-8], edx
        mov dword ptr ds : [ecx-4], edx
        mov dword ptr ds : [ecx], edx
        dec eax
        sub ecx, 0x10
        cmp eax, edx
        jge public_63550cf
        public_63550ea : nop
        lea eax, ds:[ebx-1]
        test eax, eax
        jle public_635519b
        mov ecx, dword ptr ss : [ebp-0x14]
        mov eax, 1
        mov esi, edi
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp-0xC], esi
        public_6355108 : nop
        cmp eax, ebx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [ebp-4], edx
        jge public_635517a
        mov ecx, dword ptr ss : [ebp+8]
        add esi, 4
        lea edi, ds:[ecx+0x10]
        sub ebx, eax
        public_635511c : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [esi]
        fld dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+0x40]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax]
        faddp 
        fabs 
        fsub dword ptr ds : [public_63a53d0]
        fabs 
        fcomp dword ptr ds : [public_63a5604]
        fnstsw ax
        test ah, 1
        je public_6355168
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        mov eax, dword ptr ss : [ebp-4]
        push ecx
        push edi
        push eax
        push edx
        call public_6354dc0
        add esp, 0x14
        public_6355168 : nop
        add esi, 4
        add edi, 0x10
        dec ebx
        jne public_635511c
        mov eax, dword ptr ss : [ebp-0x10]
        mov esi, dword ptr ss : [ebp-0xC]
        mov ebx, dword ptr ss : [ebp-8]
        public_635517a : nop
        mov ecx, dword ptr ss : [ebp+8]
        add esi, 4
        add ecx, 0x10
        inc eax
        mov dword ptr ss : [ebp+8], ecx
        lea edx, ds:[eax-1]
        lea ecx, ds:[ebx-1]
        cmp edx, ecx
        mov dword ptr ss : [ebp-0xC], esi
        mov dword ptr ss : [ebp-0x10], eax
        jl public_6355108
        public_635519b : nop
        test ebx, ebx
        jle public_63551b6
        mov edi, dword ptr ss : [ebp-0x14]
        mov esi, dword ptr ss : [ebp+0xC]
        public_63551a5 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        call public_6354d70
        add esi, 4
        add edi, 0x10
        dec ebx
        jne public_63551a5
        public_63551b6 : nop
        lea esp, ss:[ebp-0x24]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6355050)
    }
}

#undef public_6355090
#undef public_6355096
#undef public_63550cf
#undef public_63550ea
#undef public_6355108
#undef public_635511c
#undef public_6355168
#undef public_635517a
#undef public_635519b
#undef public_63551a5
#undef public_63551b6
