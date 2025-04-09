#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421b70);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_498730);

PROC_DECLARE(0x498730, internal_498730, public_498730);
extern "C" NAKED register_t __cdecl internal_498730()
{
    __asm
    {
        sub esp, 0x20
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x24]
        push ebx
        fld dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x2C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        push esi
        fpatan 
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x18], edi
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+3]
        mov dword ptr ss : [esp+0x1C], eax
        xor edx, edx
        mov dl, byte ptr ds : [esi+2]
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        mov dword ptr ss : [esp+0x24], ebx
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push edx
        mov dword ptr ss : [esp+0x30], ebp
        push eax
        push ecx
        fadd qword ptr ds : [public_5d3e88]
        fld st(0)
        fsin 
        fxch 
        fcos 
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x64]
        fst dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x64]
        fst dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x38]
        call public_421b70
        push 0
        push 0x3F000000
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x50]
        push edx
        push eax
        push edi
        call public_421cc0
        mov edi, dword ptr ss : [esp+0x74]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+3]
        xor edx, edx
        mov dl, byte ptr ds : [edi+2]
        xor eax, eax
        mov al, byte ptr ds : [edi+1]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [edi]
        push edx
        push eax
        push ecx
        call public_421b70
        push 0
        push 0x3F800000
        call public_421ca0
        mov eax, dword ptr ss : [esp+0x78]
        push eax
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x58]
        push edx
        push eax
        call public_421cc0
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+3]
        add esp, 0x48
        xor edx, edx
        mov dl, byte ptr ds : [esi+2]
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push edx
        push eax
        push ecx
        call public_421b70
        push 0x3F800000
        push 0x3F000000
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x60]
        push edx
        push ebp
        push ebx
        call public_421cc0
        push 0x3F800000
        push 0x3F000000
        call public_421ca0
        mov eax, dword ptr ss : [esp+0x74]
        push eax
        push ebp
        push ebx
        call public_421cc0
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+3]
        xor edx, edx
        mov dl, byte ptr ds : [edi+2]
        xor eax, eax
        mov al, byte ptr ds : [edi+1]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [edi]
        push edx
        push eax
        push ecx
        call public_421b70
        add esp, 0x48
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        mov eax, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push edx
        push eax
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        push edx
        call public_421cc0
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x40], eax
        fstp dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x44], ecx
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x48], edx
        fstp dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x38]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+3]
        xor edx, edx
        mov dl, byte ptr ds : [esi+2]
        mov dword ptr ss : [esp+0x54], eax
        xor eax, eax
        mov al, byte ptr ds : [esi+1]
        mov dword ptr ss : [esp+0x4C], ebx
        fstp dword ptr ss : [esp+0x4C]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        mov dword ptr ss : [esp+0x54], ebp
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x80]
        push edx
        push eax
        fstp dword ptr ss : [esp+0x5C]
        push ecx
        call public_421b70
        push 0
        push 0x3F000000
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ss : [esp+0x74]
        add esp, 0x40
        push edx
        push eax
        push ecx
        call public_421cc0
        xor edx, edx
        mov dl, byte ptr ds : [edi+3]
        xor eax, eax
        mov al, byte ptr ds : [edi+2]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+1]
        push edx
        xor edx, edx
        mov dl, byte ptr ds : [edi]
        push eax
        push ecx
        push edx
        call public_421b70
        push 0
        push 0x3F800000
        call public_421ca0
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        push ecx
        push edx
        call public_421cc0
        xor eax, eax
        mov al, byte ptr ds : [esi+3]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+2]
        xor edx, edx
        mov dl, byte ptr ds : [esi+1]
        push eax
        xor eax, eax
        mov al, byte ptr ds : [esi]
        push ecx
        push edx
        push eax
        call public_421b70
        add esp, 0x40
        push 0x3F800000
        push 0x3F000000
        call public_421ca0
        mov esi, dword ptr ss : [esp+0x50]
        push esi
        push ebp
        push ebx
        call public_421cc0
        push 0x3F800000
        push 0x3F000000
        call public_421ca0
        push esi
        push ebp
        push ebx
        call public_421cc0
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+3]
        xor edx, edx
        mov dl, byte ptr ds : [edi+2]
        xor eax, eax
        mov al, byte ptr ds : [edi+1]
        push ecx
        xor ecx, ecx
        mov cl, byte ptr ds : [edi]
        push edx
        push eax
        push ecx
        call public_421b70
        push 0x3F800000
        push 0x3F800000
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x64]
        add esp, 0x40
        push edx
        push eax
        push ecx
        call public_421cc0
        push 0
        push 0x3F800000
        call public_421ca0
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        push eax
        push ecx
        call public_421cc0
        add esp, 0x20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x498730)
    }
}
