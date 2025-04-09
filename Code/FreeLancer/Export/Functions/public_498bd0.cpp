#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_498bd0);

#define public_498be9 _public_498be9
#define public_498c04 _public_498c04
#define public_498c7e _public_498c7e
#define public_498e86 _public_498e86
#define public_498ef0 _public_498ef0
#define public_4992a5 _public_4992a5

PROC_DECLARE(0x498bd0, internal_498bd0, public_498bd0);
extern "C" NAKED register_t __cdecl internal_498bd0()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x84C]
        xor ebp, ebp
        cmp eax, ebp
        push edi
        jne public_498be9
        xor ebx, ebx
        jmp public_498c04
        public_498be9 : nop
        mov ecx, dword ptr ds : [esi+0x850]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov ebx, edx
        public_498c04 : nop
        fld dword ptr ds : [esi+0x46C]
        lea edi, ds:[esi+0x46C]
        fcomp dword ptr ds : [esi+0xD54]
        mov dword ptr ss : [esp+0x14], ebx
        fnstsw ax
        test ah, 0x44
        jp public_498c7e
        fld dword ptr ds : [esi+0x470]
        fcomp dword ptr ds : [esi+0xD58]
        fnstsw ax
        test ah, 0x44
        jp public_498c7e
        fld dword ptr ds : [esi+0x474]
        fcomp dword ptr ds : [esi+0xD5C]
        fnstsw ax
        test ah, 0x44
        jp public_498c7e
        fld dword ptr ds : [esi+0xD60]
        fcomp dword ptr ds : [esi+0x3F8]
        fnstsw ax
        test ah, 0x44
        jp public_498c7e
        mov ecx, dword ptr ds : [esi+0x7E0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        cmp dword ptr ds : [esi+0xD64], eax
        jne public_498c7e
        cmp dword ptr ds : [esi+0xD68], ebx
        jne public_498c7e
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x78
        ret 
        public_498c7e : nop
        mov eax, edi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0xD54], ecx
        mov ecx, dword ptr ds : [esi+0x3F8]
        mov dword ptr ds : [esi+0xD60], ecx
        mov ecx, dword ptr ds : [esi+0x7E0]
        mov dword ptr ds : [esi+0xD58], edx
        mov dword ptr ds : [esi+0xD5C], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0xD68], ebx
        lea edx, ds:[esi+0x418]
        mov dword ptr ds : [esi+0xD48], ebp
        mov dword ptr ds : [esi+0xD4C], ebp
        mov ebx, edx
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x40], ebp
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [public_5c75e0]
        mov ebp, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x44], ebp
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_5c75e0]
        mov ebx, edx
        fld dword ptr ss : [esp+0x48]
        mov ebp, dword ptr ds : [ebx]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x40], ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x44], ebp
        fxch 
        mov ecx, dword ptr ds : [esi+0xD44]
        fchs 
        mov dword ptr ds : [esi+0xD64], eax
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0xD40]
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x48], ebx
        fchs 
        mov ebx, dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x34], ebx
        fmul dword ptr ds : [public_5c75e0]
        mov ebx, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x38], ebx
        fmul dword ptr ds : [public_5c75e0]
        mov ebx, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x3C], ebx
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [esi+0x3F8]
        fsub dword ptr ds : [public_5c75dc]
        fst dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fsub st, st(1)
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x40], ebx
        mov ebx, dword ptr ds : [edi+4]
        fstp st(2)
        mov edi, dword ptr ds : [edi+8]
        fstp st(0)
        mov dword ptr ss : [esp+0x44], ebx
        fld dword ptr ds : [esi+0x3F8]
        mov dword ptr ss : [esp+0x48], edi
        fld dword ptr ss : [esp+0x40]
        mov edi, dword ptr ds : [edx]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x40], edi
        fld dword ptr ss : [esp+0x44]
        mov edi, dword ptr ds : [edx+4]
        fmul st, st(2)
        mov edx, dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x4C]
        fstp st(0)
        fld dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x44], edi
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x48], edx
        fadd st, st(1)
        mov edx, dword ptr ss : [esp+0x14]
        test edx, edx
        fstp dword ptr ss : [esp+0x54]
        fstp st(0)
        fld dword ptr ds : [esi+0x3F8]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5d3e98]
        fmul dword ptr ds : [public_5d3e94]
        fadd dword ptr ds : [public_5d3e90]
        fstp dword ptr ss : [esp+0x18]
        jle public_4992a5
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], edx
        public_498e86 : nop
        mov edi, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x4A8]
        mov edx, dword ptr ds : [esi+0x84C]
        fld st(0)
        add edx, edi
        fadd st, st(1)
        mov edi, edx
        mov ebx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x70], ebx
        mov ebx, dword ptr ds : [edi+4]
        fld dword ptr ds : [esi+0x4AC]
        mov edi, dword ptr ds : [edi+8]
        fld st(0)
        add edx, 0xC
        fadd st, st(1)
        mov dword ptr ss : [esp+0x78], edi
        mov edi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x7C], edi
        fstp dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [edx+4]
        fxch 
        mov edx, dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x80], edi
        mov dword ptr ss : [esp+0x84], edx
        mov dword ptr ss : [esp+0x74], ebx
        lea edx, ss:[esp+0x70]
        mov edi, 2
        public_498ef0 : nop
        fld dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x64], ebx
        mov ebx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x68], ebx
        fdiv dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x6C], ebx
        mov ebx, edx
        add edx, 0xC
        dec edi
        fmul dword ptr ss : [esp+0x40]
        fld st(1)
        fadd dword ptr ds : [edx-4]
        fdiv dword ptr ss : [esp+0x24]
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x4C]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x50]
        mov ebp, dword ptr ss : [esp+0x58]
        fadd st, st(1)
        mov dword ptr ds : [ebx], ebp
        fstp dword ptr ss : [esp+0x5C]
        mov ebp, dword ptr ss : [esp+0x5C]
        fstp st(0)
        mov dword ptr ds : [ebx+4], ebp
        fstp st(0)
        fld dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x60]
        mov ebp, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [ebx+8], ebp
        jne public_498ef0
        fstp st(0)
        mov ebp, dword ptr ds : [esi+0xD4C]
        fld dword ptr ss : [esp+0x7C]
        mov ebx, dword ptr ss : [esp+0x7C]
        fsub dword ptr ss : [esp+0x70]
        mov dword ptr ss : [esp+0x34], ebx
        fld dword ptr ss : [esp+0x80]
        mov ebx, dword ptr ss : [esp+0x80]
        fsub dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x38], ebx
        mov bx, word ptr ds : [esi+0xD48]
        mov edx, dword ptr ss : [esp+0x70]
        fpatan 
        mov edi, dword ptr ss : [esp+0x74]
        add ecx, 2
        add ebp, 0xC
        mov dword ptr ds : [esi+0xD4C], ebp
        mov word ptr ds : [ecx-2], bx
        mov bx, word ptr ds : [esi+0xD48]
        inc bx
        mov word ptr ds : [ecx], bx
        mov bx, word ptr ds : [esi+0xD48]
        add bx, 2
        mov word ptr ds : [ecx+2], bx
        mov bx, word ptr ds : [esi+0xD48]
        add ecx, 2
        add bx, 2
        mov word ptr ds : [ecx+2], bx
        mov bx, word ptr ds : [esi+0xD48]
        add ecx, 2
        add bx, 3
        mov word ptr ds : [ecx+2], bx
        mov bx, word ptr ds : [esi+0xD48]
        add ecx, 2
        add ecx, 2
        inc bx
        mov word ptr ds : [ecx], bx
        mov bx, word ptr ds : [esi+0xD48]
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], edi
        add bx, 4
        mov word ptr ds : [ecx+2], bx
        mov bx, word ptr ds : [esi+0xD48]
        add ecx, 2
        add bx, 5
        mov word ptr ds : [ecx+2], bx
        mov bx, word ptr ds : [esi+0xD48]
        add ecx, 2
        add bx, 6
        add ecx, 2
        mov word ptr ds : [ecx], bx
        mov bx, word ptr ds : [esi+0xD48]
        add ecx, 2
        add bx, 6
        mov word ptr ds : [ecx], bx
        add ecx, 2
        fadd qword ptr ds : [public_5d3e88]
        fld st(0)
        fsin 
        fxch 
        fcos 
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x18]
        fld st(0)
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x24]
        fld st(1)
        fadd dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fadd dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        mov bx, word ptr ds : [esi+0xD48]
        fchs 
        add bx, 7
        fld dword ptr ss : [esp+0x24]
        mov word ptr ds : [ecx], bx
        fchs 
        mov bx, word ptr ds : [esi+0xD48]
        fld st(1)
        mov ebp, dword ptr ss : [esp+0x78]
        fadd dword ptr ss : [esp+0x70]
        add bx, 5
        mov word ptr ds : [ecx+2], bx
        add dword ptr ds : [esi+0xD48], 8
        mov dword ptr ds : [eax+0xC], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x10], 0x3F000000
        mov dword ptr ds : [eax+0x14], 0
        add ecx, 2
        mov ebx, eax
        mov dword ptr ds : [ebx], edx
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], ebp
        mov ebx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+0x24], 0xFFFFFF
        mov dword ptr ds : [eax+0x28], 0x3F800000
        mov dword ptr ds : [eax+0x2C], 0
        add eax, 0x18
        mov ebp, eax
        mov dword ptr ss : [ebp], ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp+4], ebx
        mov ebx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [ebp+8], ebx
        mov ebp, dword ptr ss : [esp+0x7C]
        add eax, 0x18
        mov dword ptr ds : [eax+0xC], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x10], 0x3F000000
        mov dword ptr ds : [eax+0x14], 0x3F800000
        mov ebx, eax
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [ebx+8], ebp
        add eax, 0x18
        mov ebx, 0x3F800000
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov ebx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x28], edx
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], edi
        fld dword ptr ss : [esp+0x2C]
        fadd st, st(1)
        mov ebp, eax
        mov dword ptr ss : [ebp], ebx
        mov ebx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [ebp+4], ebx
        fstp dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ss : [esp+0x84]
        fxch 
        fadd dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [ebp+8], ebx
        mov ebp, dword ptr ss : [esp+0x7C]
        mov ebx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x34], ebp
        fstp dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x80]
        mov dword ptr ss : [esp+0x38], ebp
        fadd dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [eax+0xC], 0xFFFFFF
        add ecx, 2
        fstp dword ptr ss : [esp+0x38]
        add eax, 0x18
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ds : [eax+0xC], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x10], 0x3F000000
        mov dword ptr ds : [eax+0x14], 0
        mov ebp, eax
        mov dword ptr ss : [ebp], edx
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], ebx
        mov ebp, dword ptr ss : [esp+0x28]
        add eax, 0x18
        mov dword ptr ds : [eax+0x14], 0
        mov ebx, eax
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ebx+8], ebp
        mov ebp, dword ptr ss : [esp+0x7C]
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+0x10], edx
        add eax, 0x18
        mov edi, 0xFFFFFF
        mov dword ptr ds : [eax-0xC], edi
        mov dword ptr ds : [eax+0x14], edx
        mov ebx, eax
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ss : [esp+0x80]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [eax+0xC], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x10], 0x3F000000
        add eax, 0x18
        mov dword ptr ds : [ebx+8], ebp
        mov dword ptr ds : [eax+0xC], edi
        mov edi, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+0x10], edx
        mov dword ptr ds : [eax+0x14], edx
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+8], edi
        mov edi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        add edi, 0x18
        add eax, 0x18
        dec edx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x14], edx
        jne public_498e86
        public_4992a5 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x78
        ret 
        UNREACHABLE_TRAP(0x498bd0)
    }
}

#undef public_498be9
#undef public_498c04
#undef public_498c7e
#undef public_498e86
#undef public_498ef0
#undef public_4992a5
