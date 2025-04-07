#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6378aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6378ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6379100);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6379121 _public_6379121
#define public_637914c _public_637914c
#define public_6379163 _public_6379163
#define public_637917f _public_637917f
#define public_637918d _public_637918d
#define public_6379193 _public_6379193
#define public_637919b _public_637919b
#define public_637919f _public_637919f
#define public_63791bb _public_63791bb
#define public_63791ca _public_63791ca
#define public_63791f5 _public_63791f5
#define public_637921d _public_637921d
#define public_6379246 _public_6379246
#define public_6379256 _public_6379256
#define public_637927f _public_637927f
#define public_63792ae _public_63792ae
#define public_63792b0 _public_63792b0
#define public_63792ca _public_63792ca
#define public_6379317 _public_6379317
#define public_6379319 _public_6379319
#define public_6379333 _public_6379333
#define public_6379376 _public_6379376
#define public_6379378 _public_6379378
#define public_637938a _public_637938a
#define public_63793b0 _public_63793b0
#define public_63793be _public_63793be

PROC_DECLARE(0x6379100, internal_6379100, public_6379100);
extern "C" NAKED register_t __cdecl internal_6379100()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [ebp+4]
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x28], esi
        jne public_6379121
        pop esi
        pop ebp
        mov eax, offset public_63f34b8
        pop ebx
        add esp, 0x20
        ret 
        public_6379121 : nop
        fld dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [ebp]
        fabs 
        fld dword ptr ds : [esi+4]
        fabs 
        fst dword ptr ss : [esp+0x28]
        xor ecx, ecx
        fcomp 
        mov dword ptr ss : [esp+0x24], edi
        fnstsw ax
        test ah, 0x41
        jne public_637914c
        fstp st(0)
        mov ecx, 1
        fld dword ptr ss : [esp+0x28]
        public_637914c : nop
        fld dword ptr ds : [esi+8]
        mov edx, 2
        fabs 
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6379163
        mov ecx, edx
        public_6379163 : nop
        mov eax, ecx
        sub eax, ebx
        je public_6379193
        dec eax
        je public_637918d
        dec eax
        je public_637917f
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ds : [0], ebx
        jmp public_637919f
        public_637917f : nop
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], 1
        jmp public_637919f
        public_637918d : nop
        mov dword ptr ss : [esp+0x14], ebx
        jmp public_637919b
        public_6379193 : nop
        mov dword ptr ss : [esp+0x14], 1
        public_637919b : nop
        mov dword ptr ss : [esp+0x10], edx
        public_637919f : nop
        fld dword ptr ds : [esi+ecx*4]
        mov dword ptr ss : [esp+0x1C], ebx
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63791bb
        mov dword ptr ss : [esp+0x1C], 1
        public_63791bb : nop
        cmp ecx, 1
        jne public_63791ca
        mov eax, ecx
        sub eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        public_63791ca : nop
        mov ecx, dword ptr ds : [edi+0x3C]
        push 4
        push ecx
        call public_6343f80
        mov ebx, eax
        mov eax, dword ptr ss : [ebp+0x18]
        add esp, 8
        test eax, eax
        mov dword ptr ss : [esp+0x18], ebx
        je public_63791f5
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ss : [ebp+0x18], 0
        public_63791f5 : nop
        mov edx, dword ptr ds : [esi+0x14]
        push 4
        push edx
        call public_6343f80
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x1C]
        add esp, 8
        test eax, eax
        je public_637921d
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ss : [ebp+0x1C], 0
        public_637921d : nop
        mov eax, dword ptr ds : [esi+0x14]
        push 4
        push eax
        call public_6343f80
        mov dword ptr ss : [ebp+0x1C], eax
        mov ecx, dword ptr ds : [esi+0x14]
        add esp, 8
        dec ecx
        mov dword ptr ss : [esp+0x28], ecx
        js public_63793b0
        mov dword ptr ss : [esp+0x20], 0
        jmp public_6379256
        public_6379246 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x2C]
        public_6379256 : nop
        mov edx, dword ptr ds : [esi+0x18]
        xor eax, eax
        mov ax, word ptr ds : [edx+ecx*2]
        mov edx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edx+0xC]
        lea eax, ds:[edx+eax*4]
        mov edx, dword ptr ds : [esi+0x1C]
        movsx ecx, byte ptr ds : [edx+ecx]
        mov edx, dword ptr ss : [esp+0x1C]
        test edx, edx
        je public_637927f
        mov edx, 1
        sub edx, ecx
        mov ecx, edx
        public_637927f : nop
        add ecx, ecx
        xor esi, esi
        mov si, word ptr ds : [ecx+eax]
        sub eax, ecx
        xor edi, edi
        mov di, word ptr ds : [eax+2]
        mov ebx, dword ptr ds : [ebx+esi*4]
        test ebx, ebx
        jne public_63792ca
        push 0x1C
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_63792ae
        push esi
        mov ecx, eax
        call public_6378aa0
        jmp public_63792b0
        public_63792ae : nop
        xor eax, eax
        public_63792b0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+esi*4], eax
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ecx+edx], eax
        add ecx, 4
        mov ebx, eax
        mov dword ptr ss : [esp+0x20], ecx
        public_63792ca : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ecx+0x38]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+esi*2]
        shl eax, 1
        add edx, eax
        fld dword ptr ds : [ecx+edx*4]
        mov edx, dword ptr ss : [esp+0x14]
        add eax, edx
        fld dword ptr ds : [ecx+eax*4]
        mov eax, dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [ebx]
        mov dword ptr ds : [ebx+8], 0
        fstp dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax+edi*4]
        test esi, esi
        jne public_6379333
        push 0x1C
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_6379317
        push edi
        mov ecx, eax
        call public_6378aa0
        jmp public_6379319
        public_6379317 : nop
        xor eax, eax
        public_6379319 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+edi*4], eax
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ecx+edx], eax
        add ecx, 4
        mov esi, eax
        mov dword ptr ss : [esp+0x20], ecx
        public_6379333 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [ecx+0x38]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edi+edi*2]
        shl eax, 1
        add edx, eax
        fld dword ptr ds : [ecx+edx*4]
        mov edx, dword ptr ss : [esp+0x14]
        add eax, edx
        fld dword ptr ds : [ecx+eax*4]
        push 0x18
        fstp dword ptr ds : [esi]
        mov dword ptr ds : [esi+8], 0
        fstp dword ptr ds : [esi+4]
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_6379376
        push esi
        push ebx
        mov ecx, eax
        call public_6378ac0
        jmp public_6379378
        public_6379376 : nop
        xor eax, eax
        public_6379378 : nop
        mov dword ptr ds : [ebx+0x18], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        je public_637938a
        mov dword ptr ds : [ecx+4], eax
        public_637938a : nop
        mov dword ptr ds : [eax+4], 0
        inc dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [ebp+8], eax
        mov edx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [edx+ecx*4], eax
        dec ecx
        mov dword ptr ss : [esp+0x28], ecx
        jns public_6379246
        mov ebx, dword ptr ss : [esp+0x18]
        public_63793b0 : nop
        test ebx, ebx
        pop edi
        je public_63793be
        push ebx
        call public_6343fb0
        add esp, 4
        public_63793be : nop
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6379100)
    }
}

#undef public_6379121
#undef public_637914c
#undef public_6379163
#undef public_637917f
#undef public_637918d
#undef public_6379193
#undef public_637919b
#undef public_637919f
#undef public_63791bb
#undef public_63791ca
#undef public_63791f5
#undef public_637921d
#undef public_6379246
#undef public_6379256
#undef public_637927f
#undef public_63792ae
#undef public_63792b0
#undef public_63792ca
#undef public_6379317
#undef public_6379319
#undef public_6379333
#undef public_6379376
#undef public_6379378
#undef public_637938a
#undef public_63793b0
#undef public_63793be
