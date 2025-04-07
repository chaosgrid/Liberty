#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6385e00);
CLANG_FORWARD_PROC_SYMBOL(public_6385ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6386080);

#define public_63860c6 _public_63860c6
#define public_63860d4 _public_63860d4
#define public_63860e7 _public_63860e7
#define public_63860f3 _public_63860f3
#define public_63860fc _public_63860fc
#define public_638611b _public_638611b
#define public_6386147 _public_6386147
#define public_6386181 _public_6386181
#define public_6386190 _public_6386190
#define public_6386197 _public_6386197
#define public_63861a0 _public_63861a0
#define public_63861c3 _public_63861c3
#define public_63861cb _public_63861cb
#define public_638620d _public_638620d
#define public_6386232 _public_6386232
#define public_638623b _public_638623b
#define public_6386257 _public_6386257
#define public_6386274 _public_6386274
#define public_6386285 _public_6386285
#define public_638629d _public_638629d
#define public_63862a9 _public_63862a9

PROC_DECLARE(0x6386080, internal_6386080, public_6386080);
extern "C" NAKED register_t __cdecl internal_6386080()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [public_658b844]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [public_658b8e4]
        push edi
        xor edi, edi
        inc esi
        mov dword ptr ds : [public_658b8e4], esi
        mov ecx, dword ptr ss : [ebp+0x14]
        or ecx, 0x1000000
        test eax, eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [ebp+0x14], ecx
        je public_63860d4
        mov eax, dword ptr ds : [public_658b838]
        test eax, eax
        je public_63860d4
        mov ecx, 0xFEFFFFFF
        public_63860c6 : nop
        cmp dword ptr ds : [eax], 0
        je public_63860d4
        and dword ptr ds : [eax+0x14], ecx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_63860c6
        public_63860d4 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_63860fc
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_63860fc
        public_63860e7 : nop
        cmp dword ptr ds : [eax+0x48], edx
        jae public_63860f3
        or dword ptr ds : [eax+0x50], 0x2000
        public_63860f3 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_63860e7
        public_63860fc : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6386285
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_6386285
        public_638611b : nop
        mov edx, dword ptr ds : [eax+0x50]
        test dh, 0x20
        je public_6386274
        mov eax, dword ptr ds : [eax+0x34]
        test eax, eax
        je public_6386274
        mov esi, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x28], eax
        je public_6386274
        public_6386147 : nop
        mov eax, dword ptr ds : [public_658b8e4]
        cmp dword ptr ds : [esi+0x10], eax
        je public_6386257
        test dword ptr ds : [esi+0x14], 0x1000000
        jne public_6386257
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [esi+0xC]
        xor edi, edi
        test eax, eax
        mov ebx, 1
        mov edx, ebx
        je public_63861a0
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_63861a0
        public_6386181 : nop
        test byte ptr ds : [eax+0x51], 0x20
        je public_6386197
        cmp dword ptr ds : [eax+0x48], 0
        je public_6386190
        inc edi
        jmp public_6386197
        public_6386190 : nop
        test edx, edx
        je public_6386197
        inc edi
        xor edx, edx
        public_6386197 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6386181
        public_63861a0 : nop
        mov eax, dword ptr ds : [public_658b24c]
        dec eax
        cmp edi, eax
        jl public_6386257
        test edx, edx
        mov eax, dword ptr ss : [esp+0x2C]
        je public_63861c3
        cmp eax, 2
        je public_6386257
        xor ebx, ebx
        jmp public_63861cb
        public_63861c3 : nop
        cmp eax, ebx
        je public_6386257
        public_63861cb : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        cmp eax, 4
        mov dword ptr ss : [esp+0x10], ecx
        jl public_638620d
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call public_6370570
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        push eax
        push edx
        call public_6370570
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
        push edi
/*FIXUP push offset public_63f7adc @0x63861fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7adc
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_638620d : nop
        mov edi, dword ptr ss : [esp+0x20]
        test edi, edi
        je public_6386257
        mov eax, dword ptr ss : [esp+0x30]
        test eax, eax
        je public_6386232
        cmp dword ptr ds : [public_658b24c], 4
        jne public_6386232
        push esi
        push ebp
        call public_6385ed0
        add esp, 8
        jmp public_638623b
        public_6386232 : nop
        push esi
        call public_6385e00
        add esp, 4
        public_638623b : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebx
        push eax
        push esi
        push ebp
        push ecx
        mov dword ptr ss : [esp+0x38], eax
        call edi
        lea edx, ss:[esp+0x38]
        push edx
        call public_636ecc0
        add esp, 0x18
        public_6386257 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ds : [eax]
        add eax, 4
        test esi, esi
        mov dword ptr ss : [esp+0x28], eax
        jne public_6386147
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        public_6386274 : nop
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_638611b
        public_6386285 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_63862a9
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_63862a9
        mov edx, 0xFFFFDFFF
        public_638629d : nop
        and dword ptr ds : [eax+0x50], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_638629d
        public_63862a9 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6386080)
    }
}

#undef public_63860c6
#undef public_63860d4
#undef public_63860e7
#undef public_63860f3
#undef public_63860fc
#undef public_638611b
#undef public_6386147
#undef public_6386181
#undef public_6386190
#undef public_6386197
#undef public_63861a0
#undef public_63861c3
#undef public_63861cb
#undef public_638620d
#undef public_6386232
#undef public_638623b
#undef public_6386257
#undef public_6386274
#undef public_6386285
#undef public_638629d
#undef public_63862a9
