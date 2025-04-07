#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd40c);
CLANG_FORWARD_PROC_SYMBOL(public_65de817);
CLANG_FORWARD_PROC_SYMBOL(public_65de88a);
CLANG_FORWARD_PROC_SYMBOL(public_65de893);
CLANG_FORWARD_PROC_SYMBOL(public_65ded4d);

#define public_65dedb8 _public_65dedb8
#define public_65dedf2 _public_65dedf2
#define public_65dee02 _public_65dee02
#define public_65dee0a _public_65dee0a
#define public_65dee2f _public_65dee2f
#define public_65dee31 _public_65dee31
#define public_65dee49 _public_65dee49
#define public_65dee65 _public_65dee65
#define public_65dee7a _public_65dee7a
#define public_65dee83 _public_65dee83
#define public_65deeab _public_65deeab
#define public_65deecd _public_65deecd
#define public_65deed8 _public_65deed8
#define public_65deedd _public_65deedd
#define public_65deef2 _public_65deef2
#define public_65deef5 _public_65deef5
#define public_65deef6 _public_65deef6
#define public_65def04 _public_65def04
#define public_65def14 _public_65def14
#define public_65def1a _public_65def1a
#define public_65def1f _public_65def1f
#define public_65def21 _public_65def21

PROC_DECLARE(0x65ded4d, internal_65ded4d, public_65ded4d);
extern "C" NAKED register_t __cdecl internal_65ded4d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        and dword ptr ss : [ebp-8], 0
        cmp dword ptr ss : [ebp+0x10], 0
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        mov edx, ebx
        je public_65def1f
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, eax
        and eax, 0x1F
        sar ecx, 5
        lea esi, ds:[eax+eax*8]
        mov eax, dword ptr ds : [ecx*4+public_65e7940]
        lea edi, ds : [ecx*4+public_65e7940]
        shl esi, 2
        add eax, esi
        mov cl, byte ptr ds : [eax+4]
        test cl, 2
        jne public_65def1f
        test cl, 0x48
        je public_65dedb8
        mov al, byte ptr ds : [eax+5]
        cmp al, 0xA
        je public_65dedb8
        dec dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [ebx], al
        mov eax, dword ptr ds : [edi]
        lea edx, ds:[ebx+1]
        mov dword ptr ss : [ebp-8], 1
        mov byte ptr ds : [eax+esi+5], 0xA
        public_65dedb8 : nop
        lea eax, ss:[ebp-0xC]
        push 0
        push eax
        mov eax, dword ptr ds : [edi]
        push dword ptr ss : [ebp+0x10]
        push edx
        push dword ptr ds : [eax+esi]
        call dword ptr ds : [public_65e1034]
        test eax, eax
        jne public_65dee0a
        call dword ptr ds : [public_65e107c]
        push 5
        pop esi
        cmp eax, esi
        jne public_65dedf2
        call public_65de88a
        mov dword ptr ds : [eax], 9
        call public_65de893
        mov dword ptr ds : [eax], esi
        jmp public_65dee02
        public_65dedf2 : nop
        cmp eax, 0x6D
        je public_65def1f
        push eax
        call public_65de817
        pop ecx
        public_65dee02 : nop
        or eax, 0xFFFFFFFF
        jmp public_65def21
        public_65dee0a : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp-8], edx
        lea ecx, ds:[eax+esi+4]
        mov al, byte ptr ds : [eax+esi+4]
        test al, 0x80
        je public_65def1a
        test edx, edx
        je public_65dee2f
        cmp byte ptr ds : [ebx], 0xA
        jne public_65dee2f
        or al, 4
        jmp public_65dee31
        public_65dee2f : nop
        and al, 0xFB
        public_65dee31 : nop
        mov byte ptr ds : [ecx], al
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp+0x10], eax
        add ecx, eax
        cmp eax, ecx
        mov dword ptr ss : [ebp-8], ecx
        jae public_65def14
        public_65dee49 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov al, byte ptr ds : [eax]
        cmp al, 0x1A
        je public_65def04
        cmp al, 0xD
        je public_65dee65
        mov byte ptr ds : [ebx], al
        inc ebx
        inc dword ptr ss : [ebp+0x10]
        jmp public_65deef6
        public_65dee65 : nop
        dec ecx
        cmp dword ptr ss : [ebp+0x10], ecx
        jae public_65dee83
        mov eax, dword ptr ss : [ebp+0x10]
        inc eax
        cmp byte ptr ds : [eax], 0xA
        jne public_65dee7a
        add dword ptr ss : [ebp+0x10], 2
        jmp public_65deed8
        public_65dee7a : nop
        mov byte ptr ds : [ebx], 0xD
        inc ebx
        mov dword ptr ss : [ebp+0x10], eax
        jmp public_65deef6
        public_65dee83 : nop
        lea eax, ss:[ebp-0xC]
        push 0
        push eax
        inc dword ptr ss : [ebp+0x10]
        lea eax, ss:[ebp-1]
        push 1
        push eax
        mov eax, dword ptr ds : [edi]
        push dword ptr ds : [eax+esi]
        call dword ptr ds : [public_65e1034]
        test eax, eax
        jne public_65deeab
        call dword ptr ds : [public_65e107c]
        test eax, eax
        jne public_65deef2
        public_65deeab : nop
        cmp dword ptr ss : [ebp-0xC], 0
        je public_65deef2
        mov eax, dword ptr ds : [edi]
        test byte ptr ds : [eax+esi+4], 0x48
        je public_65deecd
        mov al, byte ptr ss : [ebp-1]
        cmp al, 0xA
        je public_65deed8
        mov byte ptr ds : [ebx], 0xD
        mov ecx, dword ptr ds : [edi]
        inc ebx
        mov byte ptr ds : [ecx+esi+5], al
        jmp public_65deef6
        public_65deecd : nop
        cmp ebx, dword ptr ss : [ebp+0xC]
        jne public_65deedd
        cmp byte ptr ss : [ebp-1], 0xA
        jne public_65deedd
        public_65deed8 : nop
        mov byte ptr ds : [ebx], 0xA
        jmp public_65deef5
        public_65deedd : nop
        push 1
        push 0xFFFFFFFF
        push dword ptr ss : [ebp+8]
        call public_65dd40c
        add esp, 0xC
        cmp byte ptr ss : [ebp-1], 0xA
        je public_65deef6
        public_65deef2 : nop
        mov byte ptr ds : [ebx], 0xD
        public_65deef5 : nop
        inc ebx
        public_65deef6 : nop
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ss : [ebp+0x10], ecx
        jb public_65dee49
        jmp public_65def14
        public_65def04 : nop
        mov eax, dword ptr ds : [edi]
        lea esi, ds:[eax+esi+4]
        mov al, byte ptr ds : [esi]
        test al, 0x40
        jne public_65def14
        or al, 2
        mov byte ptr ds : [esi], al
        public_65def14 : nop
        sub ebx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ebx
        public_65def1a : nop
        mov eax, dword ptr ss : [ebp-8]
        jmp public_65def21
        public_65def1f : nop
        xor eax, eax
        public_65def21 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65ded4d)
    }
}

#undef public_65dedb8
#undef public_65dedf2
#undef public_65dee02
#undef public_65dee0a
#undef public_65dee2f
#undef public_65dee31
#undef public_65dee49
#undef public_65dee65
#undef public_65dee7a
#undef public_65dee83
#undef public_65deeab
#undef public_65deecd
#undef public_65deed8
#undef public_65deedd
#undef public_65deef2
#undef public_65deef5
#undef public_65deef6
#undef public_65def04
#undef public_65def14
#undef public_65def1a
#undef public_65def1f
#undef public_65def21
