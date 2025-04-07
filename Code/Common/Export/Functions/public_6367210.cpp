#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366180);
CLANG_FORWARD_PROC_SYMBOL(public_6367210);
CLANG_FORWARD_PROC_SYMBOL(public_6368230);

#define public_636721f _public_636721f
#define public_6367231 _public_6367231
#define public_6367242 _public_6367242
#define public_636725a _public_636725a
#define public_6367280 _public_6367280
#define public_6367292 _public_6367292
#define public_63672c4 _public_63672c4
#define public_63672f6 _public_63672f6
#define public_63672fa _public_63672fa
#define public_6367329 _public_6367329
#define public_6367332 _public_6367332
#define public_6367346 _public_6367346
#define public_6367360 _public_6367360
#define public_6367369 _public_6367369
#define public_6367386 _public_6367386

PROC_DECLARE(0x6367210, internal_6367210, public_6367210);
extern "C" NAKED register_t __cdecl internal_6367210()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x40]
        xor eax, eax
        test ecx, ecx
        jle public_6367231
        public_636721f : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ecx+eax*4], 0
        mov ecx, dword ptr ds : [esi+0x40]
        inc eax
        cmp eax, ecx
        jl public_636721f
        public_6367231 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        test ecx, ecx
        jne public_6367242
        mov eax, 1
        pop esi
        add esp, 8
        ret 
        public_6367242 : nop
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        push ebx
        push edi
        jne public_6367292
        mov eax, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [eax+edx*4]
        xor eax, eax
        test ecx, ecx
        jle public_6367280
        public_636725a : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [ecx+eax*4]
        imul ecx, dword ptr ds : [esi+0x40]
        mov edi, dword ptr ds : [esi+0x10]
        add ecx, edx
        inc eax
        fld dword ptr ds : [edi+ecx*4]
        mov ecx, dword ptr ds : [esi+0x80]
        fchs 
        fstp dword ptr ds : [ecx+eax*4-4]
        mov ecx, dword ptr ds : [esi+0x44]
        cmp eax, ecx
        jl public_636725a
        public_6367280 : nop
        lea ecx, ds:[esi+0x6C]
        call public_6368230
        mov eax, 1
        jmp public_6367360
        public_6367292 : nop
        mov ebx, dword ptr ds : [esi+0x54]
        mov edx, ecx
        add edx, 3
        and edx, 0xFFFFFFFC
        inc ebx
        mov dword ptr ds : [esi+0x9C], ecx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0xA0], edx
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ds : [esi+0x44]
        mov dword ptr ss : [esp+0xC], edx
        xor edx, edx
        test eax, eax
        jle public_6367332
        push ebp
        public_63672c4 : nop
        mov eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov ebx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, ecx
        imul eax, dword ptr ds : [esi+0x40]
        add eax, ebx
        mov dword ptr ss : [esp+0x14], ecx
        fld dword ptr ds : [edi+eax*4]
        mov eax, dword ptr ds : [esi+0xA8]
        fchs 
        fstp dword ptr ds : [eax+edx*4]
        mov edi, dword ptr ds : [esi+0x44]
        xor eax, eax
        test edi, edi
        jle public_6367329
        jmp public_63672fa
        public_63672f6 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        public_63672fa : nop
        imul ecx, dword ptr ds : [esi+0x40]
        mov ebx, dword ptr ds : [esi+0xA0]
        mov edi, dword ptr ds : [esi+0x34]
        imul ebx, edx
        mov edi, dword ptr ds : [edi+eax*4]
        mov ebp, dword ptr ds : [esi+0xA4]
        add edi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [ecx+edi*4]
        add ebx, eax
        mov dword ptr ss : [ebp+ebx*4], ecx
        mov ecx, dword ptr ds : [esi+0x44]
        inc eax
        cmp eax, ecx
        jl public_63672f6
        public_6367329 : nop
        mov eax, dword ptr ds : [esi+0x44]
        inc edx
        cmp edx, eax
        jl public_63672c4
        pop ebp
        public_6367332 : nop
        lea ecx, ds:[esi+0x98]
        call public_6366180
        mov edx, dword ptr ds : [esi+0x44]
        xor ecx, ecx
        test edx, edx
        jle public_6367360
        public_6367346 : nop
        mov edx, dword ptr ds : [esi+0xAC]
        mov edx, dword ptr ds : [edx+ecx*4]
        mov edi, dword ptr ds : [esi+0x84]
        mov dword ptr ds : [edi+ecx*4], edx
        mov edx, dword ptr ds : [esi+0x44]
        inc ecx
        cmp ecx, edx
        jl public_6367346
        public_6367360 : nop
        mov edx, dword ptr ds : [esi+0x44]
        xor ecx, ecx
        test edx, edx
        jle public_6367386
        public_6367369 : nop
        mov edx, dword ptr ds : [esi+0x84]
        mov edi, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [edx+ecx*4]
        mov edi, dword ptr ds : [edi+ecx*4]
        mov ebx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ebx+edi*4], edx
        mov edx, dword ptr ds : [esi+0x44]
        inc ecx
        cmp ecx, edx
        jl public_6367369
        public_6367386 : nop
        mov edx, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [edx+ecx*4]
        mov edx, dword ptr ds : [esi+0x20]
        pop edi
        pop ebx
        mov dword ptr ds : [edx+ecx*4], 0x3F800000
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6367210)
    }
}

#undef public_636721f
#undef public_6367231
#undef public_6367242
#undef public_636725a
#undef public_6367280
#undef public_6367292
#undef public_63672c4
#undef public_63672f6
#undef public_63672fa
#undef public_6367329
#undef public_6367332
#undef public_6367346
#undef public_6367360
#undef public_6367369
#undef public_6367386
