#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d911f);
CLANG_FORWARD_PROC_SYMBOL(public_65dd3a7);
CLANG_FORWARD_PROC_SYMBOL(public_65dd47f);
CLANG_FORWARD_PROC_SYMBOL(public_65dd66f);
CLANG_FORWARD_PROC_SYMBOL(public_65dd6b3);

#define public_65d9157 _public_65d9157
#define public_65d917f _public_65d917f
#define public_65d918a _public_65d918a
#define public_65d9191 _public_65d9191
#define public_65d91c1 _public_65d91c1
#define public_65d91df _public_65d91df
#define public_65d91e4 _public_65d91e4
#define public_65d91f7 _public_65d91f7
#define public_65d9201 _public_65d9201
#define public_65d9215 _public_65d9215
#define public_65d9221 _public_65d9221
#define public_65d922b _public_65d922b
#define public_65d9230 _public_65d9230
#define public_65d9233 _public_65d9233

PROC_DECLARE(0x65d911f, internal_65d911f, public_65d911f);
extern "C" NAKED register_t __cdecl internal_65d911f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [esi+0x10]
        test al, 0x82
        je public_65d922b
        test al, 0x40
        jne public_65d922b
        test al, 1
        je public_65d9157
        and dword ptr ds : [esi+4], 0
        test al, 0x10
        je public_65d922b
        mov ecx, dword ptr ds : [esi+8]
        and al, 0xFE
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+0xC], eax
        public_65d9157 : nop
        mov eax, dword ptr ds : [esi+0xC]
        and dword ptr ds : [esi+4], 0
        and dword ptr ss : [ebp+0xC], 0
        and al, 0xEF
        or al, 2
        test ax, 0x10C
        mov dword ptr ds : [esi+0xC], eax
        jne public_65d9191
        cmp esi, offset public_65e5758
        je public_65d917f
        cmp esi, offset public_65e5778
        jne public_65d918a
        public_65d917f : nop
        push ebx
        call public_65dd6b3
        test eax, eax
        pop ecx
        jne public_65d9191
        public_65d918a : nop
        push esi
        call public_65dd66f
        pop ecx
        public_65d9191 : nop
        test word ptr ds : [esi+0xC], 0x108
        push edi
        je public_65d9201
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi]
        sub edi, eax
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        dec ecx
        test edi, edi
        mov dword ptr ds : [esi+4], ecx
        jle public_65d91c1
        push edi
        push eax
        push ebx
        call public_65dd47f
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_65d91f7
        public_65d91c1 : nop
        cmp ebx, 0xFFFFFFFF
        je public_65d91df
        mov ecx, ebx
        mov eax, ebx
        sar ecx, 5
        and eax, 0x1F
        mov ecx, dword ptr ds : [ecx*4+public_65e7940]
        lea eax, ds:[eax+eax*8]
        lea eax, ds:[ecx+eax*4]
        jmp public_65d91e4
        public_65d91df : nop
        mov eax, offset public_65e3510
        public_65d91e4 : nop
        test byte ptr ds : [eax+4], 0x20
        je public_65d91f7
        push 2
        push 0
        push ebx
        call public_65dd3a7
        add esp, 0xC
        public_65d91f7 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ss : [ebp+8]
        mov byte ptr ds : [eax], cl
        jmp public_65d9215
        public_65d9201 : nop
        push 1
        lea eax, ss:[ebp+8]
        pop edi
        push edi
        push eax
        push ebx
        call public_65dd47f
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        public_65d9215 : nop
        cmp dword ptr ss : [ebp+0xC], edi
        pop edi
        je public_65d9221
        or dword ptr ds : [esi+0xC], 0x20
        jmp public_65d9230
        public_65d9221 : nop
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0xFF
        jmp public_65d9233
        public_65d922b : nop
        or al, 0x20
        mov dword ptr ds : [esi+0xC], eax
        public_65d9230 : nop
        or eax, 0xFFFFFFFF
        public_65d9233 : nop
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65d911f)
    }
}

#undef public_65d9157
#undef public_65d917f
#undef public_65d918a
#undef public_65d9191
#undef public_65d91c1
#undef public_65d91df
#undef public_65d91e4
#undef public_65d91f7
#undef public_65d9201
#undef public_65d9215
#undef public_65d9221
#undef public_65d922b
#undef public_65d9230
#undef public_65d9233
